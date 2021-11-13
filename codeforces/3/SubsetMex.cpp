#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

void SubsetMex()
{
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<int> a(n), c(101, 0);
		for (int& j : a) {
			cin >> j;
			c[j]++;
		}
		int b, d;
		for (b = 0; c[b] >= 2; b++); // find first number that count == 1
		for (d = 0; c[d] >= 1; d++); // find first number that count == 0
		cout << b + d << '\n';
	}
}

