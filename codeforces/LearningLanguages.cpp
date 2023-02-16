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

vector<bool> visited, lang_visited;
vector<vector<int>> adj;
vector<vector<int>> lang;


void dfs1(int node);


void dfs2(int node) {
    lang_visited[node] = 1;
    for (int e : lang[node]) {
        if (!visited[e]) dfs1(e);
    }
}

void dfs1(int node) {
    visited[node] = 1;
    for (int e : adj[node]) {
        if (!lang_visited[e]) dfs2(e);
    }
}


void solve() {
    int n, m;
    cin >> n >> m;
    visited = vector<bool>(n + 1);
    lang_visited = vector<bool>(m + 1);
    adj = vector<vector<int>>(n + 1);
    lang = vector<vector<int>>(m + 1);
    visited[0] = 1;
    lang_visited[0] = 1;
    int graphs = 0;
    int z = 0;
    for (int i = 1; i <= n; i++) {
        int c;
        cin >> c;
        z += (c==0);
        while (c--) {
            int node;
            cin >> node;
            adj[i].push_back(node);
            lang[node].push_back(i);
        }
    }
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        dfs1(i);
        graphs++;
    }
    graphs += (z == n);
    cout << graphs - 1 << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
