#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

void MotchAndMath()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int& j : a) {
			cin >> j;
		}
		int r = a[0];
		for (int k = 1; k < n; k++) r &= a[k];
		cout << r << '\n';
	}
}

