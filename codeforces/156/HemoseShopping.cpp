#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

const int mod = 1e9 + 7;

void HemoseShopping() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n >> x;
		vi a(n);
		vifor(a);
		vi b = a;
		sort(all(b));
		if (a == b) yes;
		else {
			if (2 * x > n - 1) {
				vi c(b.begin() + n - x, b.begin() + x),
					d(a.begin() + n - x, a.begin() + x);
				if (c == d) yes;
				else no;
			}
			else yes;
		}
	}
}