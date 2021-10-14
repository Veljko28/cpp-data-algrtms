#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;


void PermutationSort()
{
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, c = 2;
		cin >> n;
		vector<int> a(n);
		for (int& i : a) cin >> i;

		if (is_sorted(a.begin(), a.end())) c = 0;

		else if (a[0] == 1 or a[n - 1] == n) c = 1;

		else if (a[0] == n and a[n - 1] == 1) c = 3;
		cout << c << '\n';

	}
}

