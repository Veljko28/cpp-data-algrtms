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
vector<vector<int>> adj;
vector<ll> dp;
const int mod = 1e9 + 7;
 
ll check(int i) {
    if (i == n) return 1;
    if (dp[i] != -1) return dp[i];
    dp[i] = 0;
    for (int j : adj[i]) {
        dp[i] += check(j);
        dp[i] %= mod;
    }
    return dp[i] %= mod;
}
 
void solve() {
    cin >> n >> m;
    adj = vector<vector<int>>(n+1);
    dp = vector<ll>(n + 1, -1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        adj[l].push_back(r);
    }
    cout << check(1) % mod;
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}