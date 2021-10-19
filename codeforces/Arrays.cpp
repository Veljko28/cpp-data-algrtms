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


void Arrays()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int na, nb, k, m;
	read(na, nb, k, m);
	vector<ll> a(na), b(nb);
	for (ll& i : a) cin >> i;
	for (ll& i : b) cin >> i;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<ll>());

	if (a[k - 1] < b[m - 1]) {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}



