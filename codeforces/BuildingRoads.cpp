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
vector<vector<int>> adj;
vector<bool> visited;
 
void check(int i) {
	if (visited[i]) return;
	visited[i] = 1;
	for (int j : adj[i]) {
		check(j);
	}
}
 
void solve() {
	cin >> n >> m;
	adj = vector<vector<int>>(n + 1);
	visited = vector<bool>(n+1);
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		adj[l].push_back(r);
		adj[r].push_back(l);
	}
	int prev = -1;
	vector<pair<int, int>> ans;
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			check(i);
			if (prev != -1) ans.push_back({ prev,i });
			prev = i;
		}
	}
	cout << ans.size() << '\n';
	for (pair<int, int> p : ans) {
		cout << p.first << ' ' << p.second << '\n';
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