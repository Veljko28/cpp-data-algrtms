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
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<int>> a(n, vector<int>(m));
	vector<int> dp(n);
	for (int i =0;i<n;i++){
		int mx = 0;
		for (int& j : a[i]) {
			cin >> j;
			mx = (j ? mx + 1 : 0);
			dp[i] = max(mx,dp[i]);
		}
	}
	while (q--) {
		int l, r;
		cin >> l >> r;
		l--, r--;
		a[l][r] ^= 1;
		int mx = 0, b = 0;
		for (int i : a[l]) {
			mx = (i ? mx + 1 : 0);
			b = max(b, mx);
		}
		dp[l] = b;
		cout << *max_element(all(dp)) << '\n';
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
