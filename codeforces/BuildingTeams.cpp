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
vector<vector<int>> a;
vector<int> colors;
vector<bool> visited;

bool dfs(int i,int c) {
    if (visited[i]) {
        return colors[i] != c;
    }
    visited[i] = 1;
    colors[i] = (c == 1 ? 2 : 1);
    for (int j : a[i]) {
        if (!dfs(j, colors[i])) return false; 
    }
    return true;
}

void solve() {
    cin >> n >> m;
    a = vector<vector<int>>(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        a[l].push_back(r);
        a[r].push_back(l);
    }
    colors = vector<int>(n + 1, -1);
    visited = vector<bool>(n + 1, 0);
    bool ok = 1;
    for (int i = 1; i <= n && ok; i++) {
        ok = dfs(i,0);
    }
    if (!ok) cout << "IMPOSSIBLE\n";
    else {
        for (int i = 1; i <= n; i++) {
            cout << colors[i] << ' ';
        }
        cout << '\n';
    }
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}