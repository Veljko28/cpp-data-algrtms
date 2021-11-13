#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long




void AothOfTheNightWatch()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, ans = 0;
	cin >> n;
	vector<ll> a(n);
	for (ll& b : a) cin >> b;
	ll max = *max_element(a.begin(), a.end());
	ll min = *min_element(a.begin(), a.end());

	for (int i = 0; i < n; i++) {
		if (a[i] > min and a[i] < max) {
			ans++;
		}
	}

	cout << ans << '\n';
}

