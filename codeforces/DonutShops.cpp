#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <stack>
using namespace std;
#define ll long long 
#define sync ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve22() {
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < c) cout << 1 << " ";
    else cout << -1 << " ";

    if (a * b > c) cout << b << '\n';
    else cout << -1 << '\n';
}

void DonutShops()
{
    sync;
    int t;
    cin >> t;
    while (t--) {
        solve22();
    }
}