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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void SashaAndHisTrip()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, v;
	read(n, v);
	if (n - 1 < v) {
		cout << n - 1 << '\n';
		return;
	}
	int ans = v - 1;
	for (int i = 1; i <= n - v; i++) {
		ans += i;
	}
	cout << ans << '\n';
}



