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

int n, idx;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> top_sort;

void dfs(int i){
    
    for (int j : adj[i]) {
        if (!visited[j]) {
            dfs(i);
        }
    }
    top_sort[idx--] = i;
}


void solve() {
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0,b; j < k; j++) {
            cin >> b;
            adj[i].push_back(b);
        }
    }
    visited = vector<bool>(n + 1);
    top_sort = vector<int>(n);
    idx = n - 1;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << top_sort[i] << ' ';
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
