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


void Letters()
{
	sync;
	int n, m;
	read(n, m);
	vector<ull> a, b;
	for (int i = 0; i < n; i++) {
		ull f;
		cin >> f;
		if (i != 0) {
			a.push_back(f + a[i - 1]);
		}
		else a.push_back(f);
	}
	for (int j = 0; j < m; j++) {
		ull r;
		cin >> r;
		b.push_back(r);
	}
	int i = 0;
	for (int j = 0; j < a.size(); j++) {
		ull d = j == 0 ? 0 : a[j - 1];
		while (true) {
			if (i != b.size() and b[i] >= d and b[i] <= a[j]) {
				cout << j + 1 << ' ' << b[i] - d << '\n';
				i++;
			}
			else break;
		}
	}
}





