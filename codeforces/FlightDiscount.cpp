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
 
#define ff first
#define ss second
 
const ll inf = 1e18;
 
vector<ll> check(int i, vector<vector<pair<int, int>>>& adj) {
	vector<ll> dist((int)adj.size(), inf);
	dist[i] = 0;
	priority_queue<pair<ll, int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
	pq.push({0,i});
	while (!pq.empty()) {
		pair<ll, int> curr = pq.top();
		pq.pop();
		if (curr.first != dist[curr.second]) continue;
		for (pair<int,int> p : adj[curr.second]) {
			ll cost = dist[curr.second] + p.second;
			if (cost < dist[p.first]) {
				dist[p.first] = cost;
				pq.push({ dist[p.first],p.first });
			}
		}
	}
	return dist;
}
 
void solve() {
	int n, m;
	cin >> n >> m;
	vector<vector<pair<int, int>>> adj(n + 1), rev(n+1);
	for (int i = 0; i < m; i++) {
		int l, r, c;
		cin >> l >> r >> c;
		adj[l].push_back({ r,c });
		rev[r].push_back({ l,c });
	}
	vector<ll> ans1 = check(1,adj), ans2 = check(n,rev);
	ll total = inf;
	for (int i = 1; i <= n; i++) {
		for (pair<int, int> p : adj[i]) {
			if (ans1[i] == inf or ans2[n] == inf) continue;
 
			total = min(total, ans1[i] + (p.second / 2) + ans2[p.first]);
		}
	}
	cout << total << '\n';
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}