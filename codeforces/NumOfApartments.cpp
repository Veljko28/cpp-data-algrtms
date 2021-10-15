#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void NumOfApartments()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		ll n;
		cin >> n;
		if (n == 1 or n == 2 or n == 4) {
			cout << -1 << '\n';
		}
		else if (n % 3 == 0) {
			cout << n / 3 << " " << 0 << " " << 0 << '\n';
		}
		else if (n % 3 == 1) {
			cout << (n - 7) / 3 << " " << 0 << " " << 1 << '\n';
		}
		else cout << (n - 5) / 3 << " " << 1 << " " << 0 << '\n';
	}
}

