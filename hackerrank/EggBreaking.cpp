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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> dp(n+1, vector<int>(k + 1));

    for (int i = 1; i <= n; i++) {
        dp[i][1] = 1;
    }
    for (int i = 1; i <= k; i++) {
        dp[1][i] = i;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= k; j++) {
            dp[i][j] = INT_MAX;
            for (int a = 1; a <= j; a++) {
                dp[i][j] = min(dp[i][j], 1 + max(dp[i - 1][j - 1], dp[i][j - a]));
            }
        }
    }

    cout << dp[n][k] << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
