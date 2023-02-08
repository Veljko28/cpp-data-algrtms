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
const int inf = 2e9;

int main() {
    sync;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k), b(k);
        for (int& i : a) cin >> i;
        for (int& i : b) cin >> i;
        vector<int> c(n,inf);
        for (int i = 0; i < k; i++) {
            c[--a[i]] = b[i];
        }
        vector<int> l(n, inf);
        int ans = inf;
        for (int i = 0; i < n; i++) {
            ans = min(ans+1, c[i]);
            l[i] = ans;
        }
        vector<int> r(n, inf);
        ans = inf;
        for (int i = n - 1; i >= 0; i--) {
            ans = min(ans + 1, c[i]);
            r[i] = ans;
        }
        for (int i = 0; i < n; i++) {
            cout << min(l[i], r[i]) << ' ';
        }
        cout << '\n';
    }
}
