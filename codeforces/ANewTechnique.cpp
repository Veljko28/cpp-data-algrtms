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



void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n * m + 1);
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            a[grid[i][j]] = i;
        }
    }
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        for (int j = 0; j < m; j++) {
            ans[i][j] = grid[a[b]][j];
        }
    }

    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            int d;
            cin >> d;
        }
    }

    for (vector<int> v : ans) {
        for (int i : v) cout << i << ' ';
        cout << '\n';
    }
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
