#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void DevuSinger() {
	short n, j = 0;
	int d;
	std::vector<short> a;
	cin >> n >> d;
	int t = d;
	for (int i = 0; i < n; i++) {
		short b;
		cin >> b;
		a.push_back(b);
	}
	t = d - ((n - 1) * 10 + std::accumulate(a.begin(), a.end(), 0));
	if (t < 0) {
		cout << -1;
		return;
	}
	j = ((n - 1) * 10) / 5 + (t / 5);
	cout << j << endl;

	return;
}