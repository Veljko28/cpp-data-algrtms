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
 
int n;
vector<vector<int>> adj;
vector<int> h,dist;
 
void dfs(int node, int parent) {
    for (int i : adj[node]) {
        if (i != parent) {
            dfs(i, node);
            h[node] = max(h[node], h[i]);
        }
    }
    h[node] += 1;
}
 
 
void check(int node, int parent) {
    int a = 0, b = 0;
 
    for (int i : adj[node]) {
        if (i != parent) {
            if (h[i] >= a) {
                b = a;
                a = h[i];
            }
            else if (h[i] > b) b = h[i];
        }
    }
    for (int i : adj[node]) {
        if (i != parent) {
            if (a == h[i]) {
                dist[i] = 1 + max(b+1, dist[node]);
            }
            else dist[i] = 1 + max(a+1, dist[node]);
            check(i, node);
        }
    }
}
 
void solve() {
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    h = dist = vector<int>(n + 1);
    int l, r;
    for (int i = 0; i < n-1; i++) {
        cin >> l >> r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    dfs(1, 0);
    check(1, 0);
    for (int i = 1; i <= n; i++) {
        cout << max(dist[i],h[i]) - 1 << ' ';
    }
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