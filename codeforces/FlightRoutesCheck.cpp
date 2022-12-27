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
vector<vector<int>> parent, child;
vector<bool> visited;
 
void p_dfs(int i) {
    if (visited[i]) return;
    visited[i] = 1;
    for (int j : child[i]) {
        p_dfs(j);
    }
}
 
void c_dfs(int i) {
    if (visited[i]) return;
    visited[i] = 1;
    for (int j : parent[i]) {
        c_dfs(j);
    }
}
 
void solve() {
    cin >> n >> m;
    parent = child = vector<vector<int>>(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        child[l].push_back(r);
        parent[r].push_back(l);
    }
    visited = vector<bool>(n + 1, 0);
    visited[0] = 1;
    p_dfs(1);
    auto f = find(all(visited), 0);
    if (f != visited.end()) {
        cout << "NO\n";
        cout << "1 " << f - visited.begin() << '\n';
        return;
    }
    visited = vector<bool>(n + 1, 0);
    visited[0] = 1;
    c_dfs(1);
    f = find(all(visited), 0);
    if (f != visited.end()) {
        cout << "NO\n";
        cout << f - visited.begin() << " 1" << '\n';
        return;
    }
    cout << "YES\n";
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}