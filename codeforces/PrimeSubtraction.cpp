#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void PrimeSubtraciton()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		ll x, y;
		cin >> x >> y;
		if (x - y != 1) {
			cout << "YES" << '\n';
		}
		else cout << "NO" << '\n';
	}
}

