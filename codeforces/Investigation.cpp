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
 
const ll inf = 1e18;
const int mod = 1e9 + 7;
#define pll pair<ll,ll>
 
 
 
void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<pll>> adj(n + 1);
	vector<ll> dist(n + 1, inf);
	dist[1] = 0;
	for (int i = 0; i < m; i++) {
		int l, r, c;
		cin >> l >> r >> c;
		adj[l].push_back({ r,c });
	}
	vector<ll> routes(n + 1, 0);
	routes[1] = 1;
	vector<int> mn(n + 1, 1e9), mx(n + 1, 0);
	mn[1] = mx[1] = 0;
	priority_queue<pll, vector<pll>, greater<pll>> pq;
	pq.push({ 0,1 });
	while (!pq.empty()) {
		ll d = pq.top().first, t = pq.top().second;
		pq.pop();
 
		if (d > dist[t]) continue;
 
		for (pll p : adj[t]) {
			if (dist[p.first] < p.second + d) continue;
 
			if (dist[p.first] > p.second + d) {
				dist[p.first] = d + p.second;
				pq.push({ dist[p.first], p.first });
 
				routes[p.first] = routes[t];
				mn[p.first] = mn[t] + 1;
				mx[p.first] = mx[t] + 1;
			}
			else {
				routes[p.first] += routes[t];
				routes[p.first] %= mod;
				mn[p.first] = min(mn[p.first], mn[t] + 1);
				mx[p.first] = max(mx[p.first], mx[t] + 1);
			}
		}
	}
	cout << dist[n] << ' ' << routes[n] << ' ' << mn[n] << ' ' << mx[n] << '\n';
}
 
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}