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
    int from, to, cost;
};

void solve() {
    int n;
    cin >> n;
    vector<Edge> edges(n);
    for (int i = 0; i < n; i++) {
        Edge e;
        cin >> e.from >> e.to >> e.cost;
        edges[i] = e;
    }
    
    vector<int> dist(n, 1e9);
    int start;
    cin >> start;
    dist[start] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (Edge e : edges) {
            dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (Edge e : edges) {
            if (dist[e.from] + e.cost < dist[e.to]) {
                dist[e.to] = INT_MIN;
            }
        }
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
