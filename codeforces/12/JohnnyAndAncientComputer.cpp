#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

ll getC(ll a) {
	while (a % 2 == 0) {
		a /= 2;
	}
	return a;
}

void solve15() {
	ll a, b;
	int ans = 0;
	read(a, b);
	if (a > b) swap(a, b);
	ll c = getC(a);
	if (getC(b) != c) {
		cout << -1 << '\n';
		return;
	}
	b /= a;
	while (b >= 8) {
		b /= 8;
		ans++;
	}
	if (b > 1) ans++;
	cout << ans << '\n';
}


void JohnnyAndAncientComputer()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve15();
	}
}

