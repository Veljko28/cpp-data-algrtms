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
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void SinglePush()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n + 2);
		vector<int> b(n + 2);
		vector<int> c(n + 2, 0);
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		for (int j = 1; j <= n; j++) {
			cin >> b[j];
			c[j] = b[j] - a[j];
		}
		int k = 0;
		bool ok = true;
		for (int i = 0; i < n + 1; i++) {
			if (c[i] < 0) {
				ok = false;
			}
			if (c[i] != c[i + 1]) k++;
		}
		if (ok && k <= 2)
			cout << "YES" << '\n';
		else
			cout << "NO" << '\n';
	}
}





