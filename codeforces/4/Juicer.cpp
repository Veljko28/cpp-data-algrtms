#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void Juicer()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, ans = 0;
	long b, d, c = 0;
	cin >> n >> b >> d;
	for (int i = 0; i < n; i++)
	{
		long a;
		cin >> a;
		if (a <= b) {
			c += a;
		}
		if (c > d) {
			ans++;
			c = 0;
		}
	}
	cout << ans << '\n';
}

