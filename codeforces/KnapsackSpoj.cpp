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
#include <unordered_set>
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

vector<pair<int, int>> items;
vector<vector<int>> dp;

void solve() {
    int s, n;
    cin >> n >> s;
    items = vector<pair<int, int>>(n);
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        items[i] = { l,r };
    }
    dp = vector<vector<int>>(n+1,vector<int>(s+1));
    for (int i = 0; i <= n; i++) dp[i][0] = 0;
    for (int i = 0; i <= s; i++) dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= s; j++) {
            dp[i][j] = dp[i - 1][j];
            if (items[i - 1].first <= j) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - items[i-1].first] + items[i-1].second);
            }
        }
    }
    cout << dp[n][s];
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}