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
vector<vector<char>> a;
pair<int, int> st, en;
vector<vector<bool>> visited;
vector<vector<pair<int, int>>> path;
vector<pair<int, int>> moves = { {-1,0},{1,0},{0,-1},{0,1} };
vector<char> charmoves = { 'U','D','L','R' };
 
bool valid(int i, int j) {
	if (i == n or i < 0 or j < 0 or j == m) return 0;
	if (visited[i][j]) return 0;
	return 1;
}
 
void solve() {
	cin >> n >> m;
	a = vector<vector<char>>(n,vector<char>(m));
	visited = vector<vector<bool>>(n, vector<bool>(m,0));
	path = vector<vector<pair<int, int>>>(n, vector<pair<int, int>>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			visited[i][j] = (a[i][j] == '#');
			if (a[i][j] == 'A') st = { i,j };
			if (a[i][j] == 'B') en = { i,j };
		}
	}
	queue<pair<int, int>> q;
	q.push(st);
	bool ok = 0;
	while (!q.empty()) {
		pair<int, int> a = q.front();
		q.pop();
		for (pair<int, int> move : moves) {
			int f = a.first + move.first;
			int s = a.second + move.second;
			if (valid(f, s)) {
				q.push({ f,s });
				path[f][s] = move;
				visited[f][s] = 1;
			}
		}
		if (visited[en.first][en.second]) {
			ok = 1;
			break;
		}
	}
	if (ok) {
		int i = en.first, j = en.second;
		string ans;
		while (i != st.first or j != st.second) {
			pair<int, int> p = path[i][j];
			for (int k = 0; k < 4; k++) {
				if (p == moves[k]) {
					ans += charmoves[k];
					break;
				}
			}
			i += -p.first, j += -p.second;
		}
		cout << "YES\n";
		cout << ans.size() << '\n';
		reverse(all(ans));
		cout << ans;
	}
	else cout << "NO\n";
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}