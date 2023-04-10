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
    vector<vector<int>> coins(n, vector<int>(m));
    vector<vector<int>> dp(n, vector<int>(m));
    vector<vector<bool>> prev(n, vector<bool>(m));
    for (vector<int>& v : coins) {
        for (int& i : v) cin >> i;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i > 0 and j > 0) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    prev[i][j] = 0;
                }
                else prev[i][j] = 1;
            }
            else if (i > 0) dp[i][j] = dp[i - 1][j], prev[i][j] = 0;
            else if (j > 0) dp[i][j] = dp[i][j - 1], prev[i][j] = 1;

            dp[i][j] += coins[i][j];
        }
    }

    int i = n - 1, j = m - 1;
    vector<pair<int, int>> path = { {n,m} };
    while (i != 0 and j != 0) {
        if (prev[i][j]) j--;
        else i--;
        path.push_back({ i + 1,j + 1 });
    }
    for (int i = path.size() - 1; i >= 0; i--) {
        cout << "( " << path[i].first << ", " << path[i].second << " )\n";
    }

}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
