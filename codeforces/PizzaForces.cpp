#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void PizzaForces()
{
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		cout << max((ll)6, n + 1) / 2 * 5 << endl;
	}
}