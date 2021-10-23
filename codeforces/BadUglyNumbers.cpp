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

void solve16() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << -1 << '\n';
		return;
	}
	string a = "2";
	for (int i = 0; i < n - 1; i++) {
		a += "3";
	}
	cout << a << '\n';
}

void BadUglyNumbers()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve16();
	}
}

