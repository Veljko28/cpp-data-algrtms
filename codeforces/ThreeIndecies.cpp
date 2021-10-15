#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void ThreeIndecies()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		bool ok = false;
		cin >> n;
		vector<int> p(n);
		for (int& i : p) cin >> i;
		for (int j = 1; j < n - 1; j++) {
			if (p[j] > p[j - 1] and p[j] > p[j + 1]) {
				cout << "YES" << '\n';
				cout << j << " " << j + 1 << " " << j + 2 << '\n';
				ok = true;
				break;
			}
		}
		if (!ok) cout << "NO" << '\n';

	}
}

