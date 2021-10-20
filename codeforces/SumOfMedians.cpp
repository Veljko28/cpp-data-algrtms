#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
    ((cin >> args), ...);
}

void solve8() {
    ll n, k;
    cin >> k >> n;
    vector<ll> a(n * k + 1);
    for (int i = 1; i <= n * k; i++) {
        cin >> a[i];
    }
    ll c = (k + 1) / 2 - 1;
    c = k - c;
    ll b = n * k + 1;
    ll sum = 0;
    while (n--) {
        b -= c;
        if (b <= 0) break;
        sum += a[b];
    }
    cout << sum << endl;
}


void SumOfMedians()
{
    sync;
    ll t;
    cin >> t;
    while (t--) {
        solve8();
    }
}



