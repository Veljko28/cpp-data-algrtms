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

int n, m;
vector<vector<int>> grid;
vector<vector<pair<bool, int>>> dp;

bool check(int i,int s) {
    if (i == n) return dp[i][s].first = (s>0);
    if (dp[i][s].first) return dp[i][s].first;

    vector<bool> tried(1024, 0);
    for (int j = 0; j < m; j++) {
        if (tried[grid[i][j]]) continue;
        dp[i][s].first = check(i + 1, grid[i][j] ^ s);
        if (dp[i][s].first) {
            dp[i][s].second = j+1;
            break;
        }
        tried[grid[i][j]] = 1;
    }
    return dp[i][s].first;
}

void solve() {
    cin >> n >> m;
    grid = vector<vector<int>>(n, vector<int>(m));
    for (vector<int>& v : grid) {
        for (int& i : v) cin >> i;
    }
    dp = vector<vector<pair<bool, int>>>(n+1, vector<pair<bool, int>>(1024, {0,0}));
    check(0,0);
    for (int i = 0; i < 1024; i++) {
        if (dp[n][i].first) {
            cout << "TAK\n";
            int j=0, s = 0;
            pair<bool, int> p = dp[j][s];
            while (j < n-1) {
                cout << p.second << ' ';
                s ^= grid[j][p.second - 1];
                p = dp[j + 1][s];
                j++;
            }
            cout << p.second << '\n';
            return;
        }
    }
    cout << "NIE\n";
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}