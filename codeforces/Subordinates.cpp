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
vector<int> cnt;
vector<vector<int>> adj;
 
void dfs(int node, int parent) {
    cnt[node] = 1;
    for (int i : adj[node]) {
        if (i != parent) dfs(i, node);
        cnt[node] += cnt[i];
    }
}
 
void solve() {
    cin >> n;
    cnt = vector<int>(n + 1, 0);
    adj = vector<vector<int>>(n + 1);
    for (int i = 2,j; i <= n; i++) {
        cin >> j;
        adj[j].push_back(i);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++) cout << cnt[i] - 1 << ' ';
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