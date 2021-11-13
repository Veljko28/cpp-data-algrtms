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

void solve13()
{
	ll x, y;
	ll a, b;
	read(x, y, a, b);
	b = min(a + a, b);
	if (x < y) {
		swap(x, y);
	}
	cout << y * b + (x - y) * a << '\n';
}

void RoadToZero()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve13();
	}
}
