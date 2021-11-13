#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

ll beauty(ll x, vector<ll> b) {
	ll sum = 0;
	for (int i = 0; i < b.size(); i++) {
		sum += b[i] % x == 0 ? b[i] / x : (b[i] / x) + 1;
	}
	return sum;
}

void StrangePartition()
{
	int t;
	cin >> t;
	while (t--) {
		long n;
		ll x;
		cin >> n >> x;
		vector<ll> b(n);
		ll sum = 0;
		for (auto& i : b) { cin >> i; sum += i; }
		sum = sum % x == 0 ? sum / x : (sum / x) + 1;
		cout << sum << " " << beauty(x, b) << endl;
	}

}