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
vector<vector<bool>> visited;
vector<vector<int>> grid;

int dfs(int i, int j) {
    int sum = grid[i][j];
    visited[i][j] = 1;

    vector<pair<int, int>> pos = { {1,0}, {-1,0}, {0,1}, {0, -1} };
    for (pair<int, int> p : pos) {
        if (p.first+i >= 0 and p.second+j >= 0 and p.first + i < n and p.second + j < m and !visited[i+p.first][j+p.second]) {
            sum += dfs(i + p.first, j + p.second);
        }
    }

    return sum;
}

void solve() {
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));
    visited = vector<vector<bool>>(n, vector<bool>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if (!grid[i][j]) {
                visited[i][j] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j]) continue;
            ans = max(ans, dfs(i, j));
        }
    }
    cout << ans << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
