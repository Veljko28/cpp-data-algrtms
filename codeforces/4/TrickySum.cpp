#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void TrickySum()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n;
		cin >> n;
		ll sum = n * (n + 1) / 2, b = 0;
		int j = 0;
		while (pow(2, j) <= n) {
			b += pow(2, j++);
		}
		cout << sum - (b * 2) << '\n';
	}
}

