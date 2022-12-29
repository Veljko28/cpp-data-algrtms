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
	int n, x;
	cin >> n >> x;
	vector<ll> w(n);
	for (ll& i : w) cin >> i;
	int l = (1 << n);
	vector<pair<ll, ll>> dp(l);
	dp[0] = { 1,0 };
	for (int m = 1; m < l; m++) {
		pair<ll, ll> best = { INT_MAX,INT_MAX };
		for (int i = 0; i < n; i++) {
			if (((1 << i) & m) == 0) continue;
			pair<ll, ll> p = dp[(m ^ (1 << i))];
			if (p.second + w[i] <= x) {
				p.second += w[i];
			}
			else {
				p.first++;
				p.second = w[i];
			}
			best = min(p, best);
		}
		dp[m] = best;
	}
	cout << dp[l-1].first << '\n';
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}