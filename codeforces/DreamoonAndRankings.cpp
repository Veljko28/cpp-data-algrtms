#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long


void solve1() {
	int n, x;
	cin >> n >> x;
	vector<bool> a(201);
	for (int j : a) a[j] = false;
	for (int j = 1; j <= n; j++) {
		int b;
		cin >> b;
		a[b] = true;
	}
	for (int k = n + x; k > 0; k--) {
		int v = 0;
		for (int i = 1; i <= k; i++) {
			if (!a[i]) v++;
		}
		if (v <= x) {
			cout << k << '\n';
			return;
		}
	}
}


void DreamoonAndRankings()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve1();
	}
}

