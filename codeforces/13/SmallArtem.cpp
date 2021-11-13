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

void solve21() {
	int n, m;
	cin >> n >> m;
	string s(m, 'B');
	vector<string> a(n, s);
	a[0][0] = 'W';
	for (string i : a) {
		cout << i << '\n';
	}
}

void SmallArtem()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve21();
	}
}


