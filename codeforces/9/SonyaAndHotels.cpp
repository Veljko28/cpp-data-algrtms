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

void SonyaAndHotels()
{
	sync;
	int n, ans = 2;
	ll d;
	read(n, d);
	vector<ll> a(n);
	for (ll& i : a) cin >> i;
	for (int i = 1; i < n; i++) {
		ll b = a[i] - a[i - 1];
		if (b > 2 * d) ans += 2;
		else if (b == 2 * d) ans++;
	}
	cout << ans << '\n';
}
