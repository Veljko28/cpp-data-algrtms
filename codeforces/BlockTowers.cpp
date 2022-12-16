#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define no cout << "NO" << '\n'
#define yes cout << "YES" << '\n'
#define prv(a) for (auto i : a) cout << i << ' '; cout << '\n';




void solve() {
    int n;
    cin >> n;
    ll ans;
    cin >> ans;
    vector<ll> a(n-1);
    for (ll& i : a) cin >> i;
    sort(all(a));
    for (int i = 0; i < n-1; i++) {
        if (a[i] <= ans) continue;
        ll diff = (a[i] - ans + 1) / 2;
        ans += diff;
    }
    cout << ans << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}