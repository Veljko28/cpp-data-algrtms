#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void CandiesDevition()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long n, k;
		cin >> n >> k;
		long rez = (n - (n % k) + min(n % k, k / 2));
		cout << rez << '\n';
	}
}

