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

vector<ll> a;
vector<ll> cnt;
vector<vector<int>> adj;
int d = 0;


ll dfs(int node, int parent) {
    d++;
    cnt[node] = 1;
    for (int v : adj[node]) {
        if (v != parent) {
            cnt[node] += dfs(v, node);
        }
    }
    a.push_back( cnt[node] - d);
    d--;
    return cnt[node];
}

void solve() {
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    cnt = vector<ll>(n + 1);
    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < n-1; i++) {
        int l, r;
        cin >> l >> r;
        adj[r].push_back(l);
        adj[l].push_back(r);
    }
    dfs(1, 0);
    sort(all(a), greater<ll>());
    for (int i = 0; i < n - k; i++) ans += a[i];
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