#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void BogoSport()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		for (int& i : v) cin >> i;
		sort(v.begin(), v.end(), greater<int>());
		for (int i = 0; i < n; i++) {
			if (i + 1 != n) {
				cout << v[i] << ' ';
			}
			else cout << v[i] << '\n';
		}
	}
}

