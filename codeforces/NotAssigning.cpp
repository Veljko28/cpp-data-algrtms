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

int n;
vector<vector<pair<int,int>>> adj; 
vector<int> deg;
vector<int> ans;

void dfs(int node, int parent, int color) {
    for (pair<int,int> v : adj[node]) {
        if (v.first != parent) {
            ans[v.second] = color;
            dfs(v.first, node, (color == 2 ? 3 : 2));
        }
    }
}

void solve() {
    cin >> n;
    adj = vector<vector<pair<int,int>>>(n);
    deg = vector<int>(n);
    int l, r;
    int mx = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> l >> r;
        l--, r--;
        adj[l].push_back({r,i});
        adj[r].push_back({l,i});
        deg[l]++, deg[r]++;
        mx = max(mx, max(deg[l], deg[r]));
    }
    if (mx > 2) {
        cout << "-1\n";
        return;
    }
    ans = vector<int>(n-1);
    dfs(min_element(all(deg)) - deg.begin(), -1, 2);
    for (int i = 0; i < n-1; i++) cout << ans[i] << ' ';
    cout << '\n';

}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}