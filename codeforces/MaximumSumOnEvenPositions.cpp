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
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    vector<vector<ll>> dp(n + 1, vector<ll>(3));
    for (int i = 0; i < n; i++) {
        dp[i + 1][0] = max(dp[i + 1][0], dp[i][0] + (i % 2 == 0 ? a[i] : 0));
        if (i+2<=n) dp[i + 2][1] = max(dp[i + 2][1], max(dp[i][1], dp[i][0]) + (i % 2 == 0 ? a[i+1] : a[i]));
        dp[i + 1][2] = max(dp[i + 1][2], max({ dp[i][0], dp[i][1], dp[i][2] }) + (i % 2 == 0 ? a[i] : 0));
    }
    cout << max({ dp[n][0], dp[n][1], dp[n][2] }) << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
