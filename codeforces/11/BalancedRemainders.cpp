#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void BalancedRemainders()
{
	sync;
	int t;
	cin >> t;

	while (t--)
	{
		int n, ans = 0;
		cin >> n;
		vector<int> a(n);
		for (int& i : a) cin >> i;
		vector<int> c(3, 0);
		for (int j = 0; j < 3; j++) {
			for (int i = 0; i < n; i++) {
				if (a[i] % 3 == j) {
					c[j]++;
				}
			}
		}

		while (*min_element(c.begin(), c.end()) != n / 3) {
			for (int i = 0; i < 3; i++) {
				if (c[i] > n / 3) {
					++ans;
					c[i]--;
					c[(i + 1) % 3]++;
				}
			}
		}

		cout << ans << '\n';

	}
}

