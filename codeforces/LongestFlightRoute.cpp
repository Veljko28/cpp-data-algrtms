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

const int inf = 2e9;

vector<set<int>> a;
vector<bool> visited;
vector<int> dist, path;

void dfs(int i) {
    visited[i] = 1;
    for (int j : a[i]) {
        if (!visited[j]) dfs(j);
        if (dist[i] < dist[j] + 1 and dist[j] != -inf) {
            dist[i] = dist[j] + 1;
            path[i] = j;
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    a = vector<set<int>>(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        a[l].insert(r);
    }
    path = vector<int>(n + 1);
    path[n] = -1;
    dist = vector<int>(n + 1, -inf);
    dist[n] = 0;
    visited = vector<bool>(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        dfs(i);
    }

    if (dist[1] != -inf) {
        int b = 1;
        vector<int> res;
        while (b != -1) {
            res.push_back(b);
            b = path[b];
        }
        cout << res.size() << '\n';
        for (int i : res) cout << i << ' ';
        cout << '\n';
    }
    else cout << "IMPOSSIBLE\n";
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}