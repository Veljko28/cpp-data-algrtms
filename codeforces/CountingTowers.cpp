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
 
vector<vector<ll>> dp;
const int mod = 1e9 + 7;
int b;
 
ll check(int i, bool j) {
	if (i == b) return 1;
	if (dp[i][j] != -1) return dp[i][j];
 
	dp[i][j] = 0;
	if (j) dp[i][j] = (2LL * check(i + 1, 1) + check(i + 1, 0)) % mod;
	else dp[i][j] = (4LL * check(i + 1, 0) + check(i + 1, 1)) % mod;
 
	return dp[i][j] %= mod;
}
 
int main() {
	sync;
	int t = 1;
	cin >> t;
	vector<int> a(t);
	for (int& i : a) {
		cin >> i;
		b = max(i, b);
	}
	dp = vector<vector<ll>>(b + 1, vector<ll>(2, -1));
	check(0, 0);
	for (int i = 0; i < t; i++) {
		int idx = b - a[i] + 1;
		if (idx == b) cout << "2\n";
		else cout << (dp[idx][0] + dp[idx][1]) % mod << '\n';
	}
}