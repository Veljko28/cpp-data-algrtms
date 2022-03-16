#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <map>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define vi vector<int>
#define pii pair<int,int>
#define ff first
#define ss second

using namespace std;

void KvadratiUzvracajuUdarac() {
	sync;
	int n;
	cin >> n;
	map<ll, ll> m;
	for (int i = 0,j,k; i < n; i++) {
		cin >> j >> k;
		m[j - k]++;
	}
	ll ans = 0;
	for (auto p : m) {
		ans += p.ss*(p.ss-1)/2;
	}
	cout << ans << '\n';
}