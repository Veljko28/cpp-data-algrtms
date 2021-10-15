#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

void ShiftingStack() {
	long long t;
	short n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		long long s = 0, nd = 0;
		bool flag = true;
		vector<int> a(n);
		for (int& i : a) cin >> i;

		for (int i = 0; i < n; i++) {
			nd += i;
			s += a[i];
			if (s < nd) {
				cout << "NO" << endl;
				flag = false;
				break;
			}
		}
		if (flag) cout << "YES" << endl;
	}
}