#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void solve6() {
	ll a, b, n;
	read(a, b, n);
	switch (n % 3) {
	case 0:
		cout << a << endl;
		break;
	case 1:
		cout << b << endl;
		break;
	default:
		cout << (a ^ b) << endl;
		break;
	}
}


void xorinacci()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t; 
	cin >> t;
	while (t--) {
		solve6();
	}
}

