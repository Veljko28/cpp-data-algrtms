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

const int mod = 1e9 + 7;
vector<pair<int,int>> d = { {0,1}, {1,0} };


void solve() {
    int h, w;
    cin >> h >> w;
    vector<string> a(h);
    for (string& s : a) cin >> s;
    vector<vector<int>> dp(h, vector<int>(w));
    dp[0][0] = 1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            for (pair<int, int> p : d) {
                int r = i + p.first;
                int c = j + p.second;
                if (r < h and c < w and a[r][c] == '.') {
                    dp[r][c] += dp[i][j];
                    dp[r][c] %= mod;
                }
            }
        }
    }
    cout << dp[h - 1][w - 1] << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
