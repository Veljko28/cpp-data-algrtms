#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <cmath>

using namespace std;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(c) (c).begin(), (c).end()
#define ll long long

#define point pair<int,pair<int,int>>
#define ff first
#define ss second


void solve() {
	int r, d;
	cin >> r >> d;
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int x, y, l;
		cin >> x >> y >> l;
		double dist = sqrt(x * x + y * y);
		ans += (dist + l <= r) and (dist - l >= r - d);
	}
	cout << ans;
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
