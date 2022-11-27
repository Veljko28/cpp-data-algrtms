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

int n, k, d;
vector<vector<ll>> dp;
const int mod = 1e9 + 7;

ll check(int i, bool ok) {
    if (i == 0 and !ok) return 0;
    if (dp[i][ok] != -1) return dp[i][ok];
    dp[i][ok] = 0;
    for (int j = 1; j <= min(i, k); j++) {
        dp[i][ok] += check(i - j, ok || (j >= d)) % mod;
    }
    return dp[i][ok] = dp[i][ok] % mod;
}

void solve() {
    cin >> n >> k >> d;
    dp = vector<vector<ll>>(n + 1,vector<ll>(2,-1));
    dp[0][1] = 1;
    // state: dp[x][ok] = number of ways to create sum of x, ok if i >= d used
    // transition: dp[x][ok] = dp[x-1] + dp[x-2] ... dp[x-min(x,k)]
    // base case: dp[0][1] = 1;
    // final answer: dp[n][0];
    check(n,0);
    cout << dp[n][0] % mod << "\n";
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}