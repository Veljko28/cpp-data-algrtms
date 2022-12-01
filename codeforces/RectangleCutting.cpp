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
 
 
const int inf = 1e9;
vector<vector<int>> dp(501, vector<int>(501, inf));
 
int check(int i, int j) {
	if (i == j) return dp[i][j] = 0;
	if (i == 1) return dp[i][j] = j - 1;
	else if (j == 1) return dp[i][j] = i - 1;
	if (dp[i][j] != inf) return dp[i][j];
	for (int k = 1; k <= (i+1)/2; k++) dp[i][j] = min(dp[i][j], 1 + check(k, j) + check(i - k, j));
	for (int k = 1; k <= (j+1)/2; k++) dp[i][j] = min(dp[i][j], 1 + check(i, k) + check(i, j - k));
	return dp[i][j];
}
 
 
void solve() {
	int a, b;
	cin >> a >> b;
	cout << check(a, b) << '\n';
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}