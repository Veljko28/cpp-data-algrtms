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
    int a, b;
    ll w;
};
 
vector<Edge> e;
vector<int> parent;
 
bool customSort(Edge& a, Edge& b) {
    return a.w < b.w;
}
 
int findParent(int i) {
    if (parent[i] == -1) return i;
    return parent[i] = findParent(parent[i]);
}
 
bool merge(int a, int b) {
    a = findParent(a), b = findParent(b);
    if (a == b) return 0;
    parent[a] = b;
    return 1;
}
 
void solve() {
    int n, m;
    cin >> n >> m;
    e = vector<Edge>(m);
    parent = vector<int>(n + 1,-1);
    for (int i = 0; i < m; i++) {
        cin >> e[i].a >> e[i].b >> e[i].w;
    }
    sort(all(e), customSort);
    ll ans = 0;
    int count = 0;
    for (Edge edge : e) {
        if (merge(edge.a, edge.b)) {
            ans += edge.w;
            count++;
        }
    }
    if (count != n - 1) cout << "IMPOSSIBLE\n";
    else cout << ans << '\n';
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}