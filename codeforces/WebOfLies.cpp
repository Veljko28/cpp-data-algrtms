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

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<pair<ll, int>>> adj(n+1);
    for (int i = 0; i < m; i++) {
        int l, r, v;
        cin >> l >> r >> v;
        adj[l].push_back({ v,r });
        adj[r].push_back({ v,l });
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    pq.push({ 0,1 });
    vector<ll> dist(n + 1, inf);
    vector<int> prev(n + 1, -1);
    vector<bool> visited(n + 1, 0);
    dist[1] = 0;
    while (!pq.empty()) {
        ll u = pq.top().first, v = pq.top().second;
        pq.pop();
        visited[v] = 1;
        for (pair<ll, int> p : adj[v]) {
            if (visited[p.second]) continue;
            if (dist[p.second] > p.first + u) {
                dist[p.second] = p.first + u;
                prev[p.second] = v;
                pq.push({ p.first + u,p.second });

            }
        }
    }
    if (prev[n] != -1) {
        vector<int> ans;
        int i = n;
        while (prev[i] != -1) {
            ans.push_back(i);
            i = prev[i];
        }
        ans.push_back(1);
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i] << ' ';
        }
    }
    else cout << -1;
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