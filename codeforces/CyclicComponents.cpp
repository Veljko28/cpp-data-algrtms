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
#include <unordered_set>
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
vector<vector<int>> adj;
int ok = 0;
int start;

void dfs(int node, int parent) {
    if (adj[node].size() > 2) ok = -1;
    visited[node] = 1;
    for (int i : adj[node]) {
        if (i != parent) {
            if (visited[i]) {
                if (i == start and ok == 0) ok = 1;
                continue;
            }

            dfs(i, node);
        }
    }
}


void solve() {
    int n, m;
    cin >> n >> m;
    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    visited = vector<bool>(n + 1);
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        start = i; ok = 0;
        dfs(i, 0);
        ans += (ok == 1);
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