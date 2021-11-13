#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

int cnt1(string s) {
	int max = 0;
	for (char c : s) {
		int a = count(s.begin(), s.end(), c);
		if (a > max) max = a;
	}
	return max;
}

void ImportantExam()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m, ans = 0;
	read(n, m);
	vector<string> a(n);
	for (string& s : a) cin >> s;
	for (int i = 0; i < m; i++) {
		int c;
		cin >> c;
		string d;
		for (int j = 0; j < n; j++) {
			d += a[j][i];
		}
		ans += cnt1(d) * c;
	}
	cout << ans << '\n';
}


