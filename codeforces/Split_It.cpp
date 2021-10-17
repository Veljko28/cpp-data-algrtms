#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long


void solve5() {
	int n, k;
	cin >> n >> k;
	string s;
	cin >> s;
	bool a = true;
	for (int i = 0; i < k; i++) {
		a = a && s[i] == s[n - i - 1];
	}
	if (a && k * 2 < n) {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}


void Split_It()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve5();
	}
}

