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
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;

int n;
string s;
const int mod = 1e9 + 7;
vector<vector<int>> dp;


int check(int idx, int val) {
	if (idx == n) return 1;
	if (dp[val][idx] != -1) return dp[val][idx];
	int ways = 0;
	for (int i = 1; i <= 9; i++) {
		if (i < val or (s[idx] != '-' and s[idx] != (i + '0'))) continue;
		ways += check(idx + 1, i);
		ways %= mod;
	}
	return dp[val][idx] = ways;
}

void solve() {
	cin >> n >> s;
	dp = vector<vector<int>>(10, vector<int>(n,-1));
	cout << check(0,1) << '\n';
}

int main() {
	sync;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}