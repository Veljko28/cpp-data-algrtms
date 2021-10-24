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

void Game23()
{
	sync;
	int ans = 0;
	ll n, m;
	read(n, m);
	if (m % n) {
		cout << -1 << '\n';
		return;
	}
	ll a = m / n;
	while (a % 2 == 0) {
		a /= 2;
		ans++;
	}
	while (a % 3 == 0) {
		a /= 3;
		ans++;
	}
	if (a != 1) {
		cout << -1 << '\n';
	}
	else cout << ans << '\n';
}


