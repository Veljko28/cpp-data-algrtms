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

int n, m;
string a, b;
vector<vector<int>> dp;

int check(int i, int j) {
	if (i == n) return m - j;
	if (j == m) return n - i;
	if (dp[i][j] != -1) return dp[i][j];

	dp[i][j] = 0;
	if (a[i] == b[j]) dp[i][j] = check(i + 1, j + 1);
	else dp[i][j] = 1 + min(min(check(i,j+1), check(i+1,j)),check(i+1,j+1));

	return dp[i][j];
}

void solve() {
	cin >> a >> b;
	n = (int)a.length(), m = (int)b.length();
	dp = vector<vector<int>>(n + 1, vector<int>(m + 1, -1));
	cout << check(0, 0) << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}