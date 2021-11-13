#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

void MakeProductEqualOne()
{
	int n;
	long long a, c = 0;
	vector<long long> b;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > 1) {
			c += a - 1;
			b.push_back(1);
		}
		else if (a < -1) {
			c += -1 - a;
			b.push_back(-1);
		}
		else b.push_back(a);

	}
	int z = std::count(b.begin(), b.end(), 0);
	if (std::count(b.begin(), b.end(), -1) % 2 != 0) {
		if (z > 0) {
			c += 1;
			z--;
		}
		else c += 2;
	}

	if (z > 0) {
		c += z;
	}
	cout << c << endl;
}