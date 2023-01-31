#include <iostream>
#include <vector>

#define sync ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define all(a) (a).begin(), (a).end()
using namespace std;

int main() {
    sync;
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > ans + 1) break;
        ans += a[i];
    }
    cout << ans + 1 << '\n';
}