#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void CubeSorting()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		vector<int> a;
		cin >> n;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			a.push_back(x);
		}
		vector<int> temp = a;
		auto it = unique(a.begin(), a.end());
		a.resize(distance(a.begin(), it));
		if (a == temp) {
			sort(a.begin(), a.end(), greater<int>());
			if (a == temp) cout << "NO" << endl;
			else cout << "YES" << endl;
		}
		else cout << "YES" << endl;
	}
}
