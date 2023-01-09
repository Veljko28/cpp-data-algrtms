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
vector<vector<int>> adj;
vector<double> prob;
int d = 0;


double dfs(int node, int parent) {
    d++;
    bool ok = 0;
    double s = 0;
    for (int v : adj[node]) {
        if (v != parent) {
            ok = 1;
            s += dfs(v, node);
        }
    }
    if (!ok) prob[node] = d-1;
    else prob[node] = s / (double)(adj[node].size()-(0 != parent));
    d--;

    return prob[node];
}

void solve() {
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    prob = vector<double>(n + 1);
    int l, r;
    for (int i = 0; i < n - 1; i++) {
        cin >> l >> r;
        adj[l].push_back(r);
        adj[r].push_back(l);
    }
    dfs(1, 0);
    printf("%.15f", prob[1]);
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}