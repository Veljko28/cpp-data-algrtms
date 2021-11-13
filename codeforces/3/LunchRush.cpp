#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;


void LunchRush()
{
	std::ios::sync_with_stdio(false);

	int n;
	long k;
	cin >> n >> k;
	long ans = -1000000000;
	while (n--) {
		long a, b;
		long c = 0;
		cin >> a >> b;
		if (b > k) {
			c = a - (b - k);
		}
		else c = a;

		if (c > ans) ans = c;

	}
	cout << ans << endl;
}

