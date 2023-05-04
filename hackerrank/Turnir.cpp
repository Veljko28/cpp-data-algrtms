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
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> v(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }
    vector<ll> dp(k + 1), prev_dp(k + 1);
    vector<vector<int>> grid(n+1, vector<int>(m+1, INT_MAX));
    // dp[k] - maximum value you can get using k coins
    for (int i = 1; i <= n; i++) {
        grid[i][0] = 0;
        for (int j = 1; j <= m; j++) {
            cin >> grid[i][j];
        }
        sort(all(grid[i]));
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            int val;

            if (j == 0) val = 0;
            else val = grid[i][j] + 1;
            
            for (int r = val; r <= k; r++) {
                dp[r] = max(dp[r], prev_dp[r - val] + 1LL * j * v[i]);
            }
        }
        prev_dp = dp;
    }
    cout << *max_element(all(dp)) << "\n";
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
