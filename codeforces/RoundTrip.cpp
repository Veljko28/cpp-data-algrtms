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
vector<vector<int>> a;
vector<bool> visited;
bool ok = 0;
 
void dfs(int i, int parent, vector<int>& path) {
	if (ok) return;
	if (visited[i]) {
		if (path.size() > 2) {
			int s = 1;
			string res = to_string(i) + " ";
			for (int j = path.size() - 1; j >= 0; j--) {
				s++;
				res += to_string(path[j]) + " ";
				if (path[j] == i) break;
			}
			cout << s << '\n';
			cout << res << '\n';
			exit(0);
		}
		return;
	}
	visited[i] = 1;
	path.push_back(i);
	for (int j : a[i]) {
		if (j == parent) continue;
		dfs(j, i, path);
	}
	path.pop_back();
}
 
void solve() {
	cin >> n >> m;
	a = vector<vector<int>>(n + 1);
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		a[l].push_back(r);
		a[r].push_back(l);
	}
	visited = vector<bool>(n+1);
	for (int i = 1; i <= n; i++) {
		if (visited[i]) continue;
		vector<int> path;
		dfs(i, -1, path);
	}
	cout << "IMPOSSIBLE\n";
}
 
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}