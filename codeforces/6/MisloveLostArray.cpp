#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void MisloveLostArray()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, l, r;
	int ans1 = 0, ans2 = 0;
	read(n, l, r);
	ll a[21];
	a[0] = 1;
	for (int i = 1; i < 21; i++) {
		a[i] = a[i - 1] * 2;
	}

	for (int j = l - 1; j >= 0; j--) {
		ans1 += a[j];
	}
	ans1 += n - l;

	for (int k = 0; k < r; k++) {
		ans2 += a[k];
	}
	ans2 += (n - r) * a[r - 1];

	cout << ans1 << " " << ans2 << endl;
}

