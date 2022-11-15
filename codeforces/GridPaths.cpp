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
#include <fstream>
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
 
ll n;
vector<vector<ll>> dp;
vector<string> a;
const int mod = 1e9 + 7;
 
int check(int i, int j) {
	if (i >= n or j >= n) return 0;
	if (a[i][j] == '*') {
		return dp[i][j] = 0;
	}
	if (dp[i][j] != -1) return dp[i][j];
	return dp[i][j] = (check(i + 1, j) + check(i, j + 1)) % mod;
}
 
void solve() {
	cin >> n;
	dp = vector<vector<ll>>(n, vector<ll>(n,-1));
	a = vector<string>(n);
	for (string& s : a) {
		cin >> s;
	}
	dp[n - 1][n - 1] = 1;
	cout << check(0, 0) % mod << '\n';
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}