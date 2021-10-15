#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void SymmetricMatrix()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n, m;
		cin >> n >> m;
		vector<vector<vector<int>>> a;
		for (int j = 0; j < n; j++) {
			vector<vector<int>> b;
			for (int k = 0; k < 2; k++) {
				vector<int> c;
				for (int l = 0; l < 2; l++) {
					int d;
					cin >> d;
					c.push_back(d);
				}
				b.push_back(c);
			}
			a.push_back(b);
		}

		bool ans = false;
		for (int o = 0; o < n; o++) {
			ans |= a[o][1][0] == a[o][0][1];
		}
		ans &= m % 2 == 0;
		if (ans) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
}

