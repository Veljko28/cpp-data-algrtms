#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <cstring>
#include <ctime>
#include <set>
#include <list>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <queue>
#include <deque>
#include <chrono>
#include <sstream>
#include <ostream>
#include <assert.h>
#include <cstdint>
#include <climits>
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vector<int>,greater<int>>
using namespace std;
 
void solve() {
	int n, t;
	cin >> n >> t;
	vector<int> a(n);
	for (int& i : a) cin >> i;
	ll l = 0, r = 1e18;
	ll ans = 1e18;
	while (l <= r) {
		ll m = (l + r) / 2;
		ll s = 0;
		for (int i = 0; i < n; i++) {
			s += min((m / a[i]), (ll)1e9);
		}
		if (s >= t) {
			r = m - 1;
			ans = min(ans,m);
		}
		else {
			l = m+1;
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