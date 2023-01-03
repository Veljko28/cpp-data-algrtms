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
vector<vector<ll>> adj;
vector<bool> visited;
vector<int> path;
const ll inf = 1e18;
ll ans = 0;
 
bool check() {
    visited = vector<bool>(n + 1, 0);
    queue<ll> q;
    q.push(1);
    visited[1] = 1;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (visited[i] or !adj[v][i]) continue;
            q.push(i);
            visited[i] = 1;
            path[i] = v;
        }
    }
    return visited[n];
}
 
void solve() {
    cin >> n >> m;
    int l, r, v;
    adj = vector<vector<ll>>(n + 1, vector<ll>(n+1,0));
    path = vector<int>(n + 1,0);
    for (int i = 0; i < m; i++) {
        cin >> l >> r >> v;
        adj[l][r] += v;
    }
    while (check()) {
        ll f = inf;
        for (int i = n; i != 1; i = path[i]) {
            f = min(f, adj[path[i]][i]);
        }
        ans += f;
        for (int i = n; i != 1; i = path[i]) {
            ll u = path[i];
            adj[u][i] -= f;
            adj[i][u] += f;
        }
    }
    cout << ans;
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}