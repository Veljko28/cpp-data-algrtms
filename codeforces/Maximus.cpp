#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void Maximus()
{
	int n;
	cin >> n;
	vector<ll> b(n);
	ll x = 0;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		b[i] += x;
		x = max(x, b[i]);
		cout << b[i] << " ";
	}
}