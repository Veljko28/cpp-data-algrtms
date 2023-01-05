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
int d = 0, md = 0, v;
 
void dfs(int node, int parent) {
    if (md < d) {
        md = d;
        v = node;
    }
    for (int i : adj[node]) {
        if (i != parent) {
            d++;
            dfs(i, node);
            d--;
        }
    }
}
 
void solve() {
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int l, r;
        cin >> l >> r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    dfs(1, 0);
    d = 0, md = 0;
    dfs(v, 0);
    cout << md;
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}