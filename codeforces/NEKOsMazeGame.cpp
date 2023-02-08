#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <climits>
#include <map>
#include <set>
#include <string>
#include <queue>
#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define ll long long

using namespace std;

int main() {
    sync;
    int n, q;
    cin >> n >> q;
    vector<vector<bool>> a(3, vector<bool>(n + 2));
    int l, r;
    int bad = 0;
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        a[l][r] = !a[l][r];
        int o = l == 2 ? 1 : 2;
        if (a[l][r]) {
            for (int i = r - 1; i <= r + 1; i++) if (a[o][i]) bad++;
        }
        else {
           for (int i = r - 1; i <= r + 1; i++) if (a[o][i]) bad--;
        }
        if (!bad) cout << "Yes\n";
        else cout << "No\n";
    }
}
