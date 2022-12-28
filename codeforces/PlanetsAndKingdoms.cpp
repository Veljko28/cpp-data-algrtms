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
 
 
vector<vector<int>> adj, rev;
vector<int> st;
vector<bool> visited;
vector<int> c;
 
void dfs(int i) {
	visited[i] = 1;
	for (int j : adj[i]) {
		if (!visited[j]) dfs(j);
	}
	st.push_back(i);
}
 
void dfs2(int i, int v) {
	c[i] = v;
	for (int j : rev[i]) {
		if (c[j] == -1) dfs2(j, v);
	}
}
 
void solve() {
	int n, m;
	cin >> n >> m;
	adj  = rev = vector<vector<int>>(n + 1);
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		adj[l].push_back(r);
		rev[r].push_back(l);
	}
	c = vector<int>(n + 1, -1);
	visited = vector<bool>(n + 1);
	for (int i = 1; i <= n; i++) {
		if (visited[i]) continue;
		dfs(i);
	}
	for (int i = st.size()-1; i >= 0; i--) {
		if (c[st[i]] == -1) {
			dfs2(st[i], st[i]);
		}
	}
	vector<int> ans(2e5 + 1, 0);
	int k = 0;
	for (int i = 1; i <= n; i++) {
		if (!ans[c[i]]) {
			ans[c[i]] = ++k;
		}
	}
	cout << k << '\n';
	for (int i = 1; i <= n; i++) {
		cout << ans[c[i]] << ' ';
	}
	cout << '\n';
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}