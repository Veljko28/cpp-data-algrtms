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
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;

void solve() {
    ll n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    for (int& i : h) cin >> i;
    for (int& i : s) cin >> i;

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= x; j++) {
            dp[i][j] = dp[i - 1][j];
            int a = j - h[i - 1];
            if (a >= 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][a] + s[i - 1]);
            }
        }
    }
    cout << dp[n][x];
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}