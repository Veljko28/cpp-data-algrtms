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
    pair<int, int> a, b, c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;
    bool ok = 0;
    if (a.first > min(b.first, c.first) and a.first < max(b.first, c.first)) ok = 1;
    if (b.first > min(a.first, c.first) and b.first < max(a.first, c.first)) ok = 1;
    if (c.first > min(a.first, b.first) and c.first < max(a.first, b.first)) ok = 1;


    if (a.second > min(b.second, c.second) and a.second < max(b.second, c.second)) ok = 1;
    if (b.second > min(a.second, c.second) and b.second < max(a.second, c.second)) ok = 1;
    if (c.second > min(a.second, b.second) and c.second < max(a.second, b.second)) ok = 1;


    if (ok) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}