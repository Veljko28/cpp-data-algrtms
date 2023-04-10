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
    vector<vector<int>> dp(n + 1, vector<int>(2));
    dp[1][0] = dp[1][1] = 1;
    dp[2][0] = dp[2][1] = 2;
    for (int i = 3; i <= n; i++) {
        for (int j = 0; j <= 1; j++) {
            dp[i][j] = dp[i - 1][j ^ 1] + dp[i - 2][j ^ 1];
        }
    }
    cout << dp[n][0] + dp[n][1] << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
