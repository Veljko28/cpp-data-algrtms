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


void AmrAndMusic()
{
	sync;
	int n, k, s = 0;
	vector<pair<int, int>> a;
	vector<int> b;
	read(n, k);
	for (int j = 1; j <= n; j++) {
		int d;
		cin >> d;
		a.push_back(make_pair(d, j));
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++) {
		if (s + a[i].first <= k) {
			b.push_back(a[i].second);
			s += a[i].first;
		}
		else break;
	}
	if (b.size() == 0) {
		cout << 0 << '\n';
	}
	else {
		cout << b.size() << '\n';
		for (int i = 0; i < b.size(); i++) {
			if (i + 1 == b.size()) {
				cout << b[i];
			}
			else cout << b[i] << " ";
		}
	}
}





