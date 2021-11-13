#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void CustomisingTracks()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		vector<long> v(n);
		ll s = 0;
		for (long& l : v) {
			cin >> l;
			s += l;
		}
		ll a = s % n;
		cout << a * (n - a) << '\n';
	}
}

