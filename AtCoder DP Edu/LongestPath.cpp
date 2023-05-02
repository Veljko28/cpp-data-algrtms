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

vector<bool> visited;
vector<int> dist, in_deg;
vector<vector<int>> adj;
int mx = 0;

void dfs(int i) {
    visited[i] = 1;
    for (int j : adj[i]) {
        dist[j] = max(dist[j], dist[i] + 1);
        in_deg[j]--;
        if (in_deg[j] == 0) dfs(j);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    visited = vector<bool>(n + 1);
    adj = vector<vector<int>>(n+1);
    dist = in_deg = vector<int>(n + 1);
    for (int i = 0; i < m; i++) {
        int s, e;
        cin >> s >> e;
        adj[s].push_back(e);
        in_deg[e]++;
    }
    for (int i = 1; i <= n; i++) {
        if (!visited[i] and !in_deg[i])
            dfs(i);
    }
    cout << *max_element(all(dist)) << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
