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

struct Edge {
    int a, b, c;
};

int n, m;
vector<Edge> edges;
vector<int> path;

const ll inf = 1e18;

void solve() {
    cin >> n >> m;
    edges = vector<Edge>(m+1);
    path = vector<int>(n + 1, -1);
    for (int i = 0; i < m; i++) {
        cin >> edges[i].a >> edges[i].b >> edges[i].c;
    }
    vector<ll> dist(n + 1, inf);
    int prev = -1;
    for (int i = 0; i < n; i++) {
        prev = -1;
        for (Edge e : edges) {
            if (dist[e.b] > dist[e.a] + e.c) {
                dist[e.b] = dist[e.a] + e.c;
                path[e.b] = e.a;
                prev = e.b;
            }
        }
    }
    if (prev == -1) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
        for (int i = 0; i < n; i++) {
            prev = path[prev];
        }
        vector<int> ans;
        for (int i = prev;; i = path[i]) {
            ans.push_back(i);
            if (i == prev and ans.size() > 1) break;
        }
        for (int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << ' ';
        cout << "\n";

    }

}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}