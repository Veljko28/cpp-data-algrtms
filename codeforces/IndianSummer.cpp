#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(c) (c).begin(), (c).end()
#define ll long long

#define point pair<int,pair<int,int>>
#define ff first
#define ss second


void solve() {
	int n;
	cin >> n;
	map<pair<string, string>, int> m;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		if (!m.count({ a,b })) {
			m[{a, b}]++;
			ans++;
		}
	}
	cout << ans << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
