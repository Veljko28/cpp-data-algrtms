#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <climits>
#include <queue>
#include <cmath>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define all(a) (a).begin(), (a).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define ff first
#define ss second
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1==a.size()){ cout << a[i] << '\n'; } cout << a[i] << ' '; }

using namespace std;

void LevelStatistics() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vi b(2, INT_MIN);
		vector<pii> a(n);
		bool ok = true;
		for (int i = 0, j, k; i < n; i++) {
			cin >> j >> k;
			if (j < k or j < b[0] or k < b[1] or (j==b[0] and k > b[1])) ok = false;
			b[0] = max(b[0], j); b[1] = max(b[1], k);
			a[i] = { j,k };
		}
		if (!ok) {
			no;
			continue;
		}
		sort(all(a));
		for (int i = 0; i < n-1; i++) {
			pii c = a[i], d = a[i + 1];
			if (c.ss > d.ss or (c.ff == d.ff and c.ss != d.ss) or ((d.ss-c.ss)>(d.ff-c.ff))) {
				ok = false;
				break;
			}
		}
		if (ok) yes;
		else no;
	}
}