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

map<int, bool> red, blue;
vector<vector<int>> adj;

void dfs(int node, int parent, bool type) {
    if (!type) red[node] = 1;
    else blue[node] = 1;
    for (int v : adj[node]) {
        if (v != parent) dfs(v, node, type ^ 1);
    }
}

void solve() {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    int l, r;
    for (int i = 0; i < n-1; i++) {
        cin >> l >> r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    dfs(1, 0, 0);
    ll ans = 0;
    for (pair<int, bool> p : red) {
        ans += (blue.size() - adj[p.first].size());
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