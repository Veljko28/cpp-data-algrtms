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
    string s;
    cin >> s;
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i =0;i<n;i++) {
        dp[i][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int l = 0; l < n-i+1; l++) {
            int r = l + i - 1;
            if (s[l] == s[r]) {
                if (i == 2) dp[l][r] = 2;
                else dp[l][r] = dp[l + 1][r - 1] + 2;
            }
            else dp[l][r] = max(dp[l + 1][r], dp[l][r - 1]);
        }
    }

    cout << dp[0][n-1] << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
