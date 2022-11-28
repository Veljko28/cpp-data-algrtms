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

int k;
int mx;
const int mod = 1e9 + 7;
vector<ll> dp;

ll check(int i) {
	if (i < 0) return 0;
	if (dp[i] != -1) return dp[i];
	dp[i] = 0;
	dp[i] = (check(i - 1) + check(i - k)) % mod;
	return dp[i] %= mod;
}


void solve() {
	// state: dp[i] - number of ways to get to index i
	// transtion: dp[i] = check(i+1) + check(i+k) 
	// base case: dp[1] = 1; if i > r return 0
	// final answer: Sum of dp[l]+dp[l+1]...dp[r]
	int t;
	cin >> t >> k;
	vector<pair<int, int>> a(t);
	mx = 0;
	for (pair<int, int>& p : a) {
		cin >> p.first >> p.second;
		mx = max(mx, p.second);
	}
	dp = vector<ll>(mx + 1, -1LL);
	for (int i = 0; i < k; i++) dp[i] = 1;
	check(mx);
	vector<ll> pref(mx + 1);
	for (int i = 1; i <= mx; i++) pref[i] = (pref[i - 1] + dp[i]);
	for (pair<int, int> p : a) {
		cout << (pref[p.second] - pref[p.first-1]) % mod << '\n';
	}
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}