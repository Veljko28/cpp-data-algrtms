#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

ll num(ll a, ll b, ll c) {
	return abs(a - b) + abs(a - c) + abs(b - c);;
}

void solve4() {
	ll a, b, c;
	cin >> a >> b >> c;
	ll ans = num(a, b, c);
	ll an[3] = { a - 1, a ,a + 1 };
	ll bn[3] = { b - 1, b ,b + 1 };
	ll cn[3] = { c - 1, c ,c + 1 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				ans = min(ans, num(an[i], bn[j], cn[k]));
			}
		}
	}
	cout << ans << '\n';
}


void ThreeFriends()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve4();
	}
}

