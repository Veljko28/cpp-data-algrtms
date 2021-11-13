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


void solve18() {
	ll a, b;
	read(a, b);
	if (b == 1) {
		cout << "NO" << '\n';
		return;
	}
	cout << "YES" << '\n';
	cout << a << " " << a * b << " " << a * (b + 1) << '\n';
	return;
}

void AlmostGoodNumbers()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve18();
	}
}

