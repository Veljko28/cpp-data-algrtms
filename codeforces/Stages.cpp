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
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void Stages()
{
	sync;
	int n, k;
	string s;
	read(n, k, s);
	sort(s.begin(), s.end());
	int ans = s[0] - 96, l = ans + 2, d = 1;
	for (int i = 1; i < n; i++) {
		if (d == k) break;
		int c = s[i] - 96;
		if (c >= l) {
			ans += c;
			l = c + 2;
			d++;
		}
	}
	if (d != k) cout << -1 << '\n';
	else cout << ans << '\n';
}



