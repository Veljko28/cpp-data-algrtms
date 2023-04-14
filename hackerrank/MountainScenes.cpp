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

int n, w, h;
vector<vector<ll>> dp;
const int mod = 1e9 + 7;


ll check(int i, int tape) {
    if (tape < 0) return 0;
    if (i > w) return 1;
    if (dp[i][tape] != -1) return dp[i][tape];

    ll cnt = 0;
    for (int j = 0; j <= h; j++) {
        cnt += check(i + 1, tape - j);
        cnt %= mod;
    }

    return dp[i][tape] = cnt;
}

void solve() {
    cin >> n >> w >> h;
    int rib = min(n, w * h);
    int plains = (rib / w) + 1;
    dp = vector<vector<ll>>(w+1, vector<ll>(n+1, -1));
    cout << ((check(1,n) - plains) + mod) % mod;
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
