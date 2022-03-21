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

void Equalectangles() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		bool ok = true;
		vi a(4 * n);
		vifor(a);
		sort(all(a));
		int p = a[0] * a[4 * n - 1];
		for (int i = 0; i < n; i++) {
			int l = 2 * i, r = 4 * n - (2 * i) - 1;
			if (a[l] != a[l + 1] || a[r] != a[r - 1] || a[l] * a[r] != p) {
				ok = false;
				break;
			}
		}
		if (ok) yes;
		else no;
	}
}