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

int n;
vector<vector<ll>> dp;
const int mod = 1e9 + 7;

ll check(int i, bool t1, bool t2) {
    if (i == n) return 1;

    int st = 0;
    if (t1) st |= 1;
    if (t2) st |= 2;

    if (dp[i][st] != -1) return dp[i][st];

    bool t3 = i + 1 < n;

    ll cnt = 0;
    if (t1 and t2 and t3) {
        cnt += check(i + 1, 1, 0);
        cnt += check(i + 1, 0, 1);
    }
    if (t1 and !t2 and t3) cnt += check(i + 1, 0, 0) + check(i+1,0,1);
    if (!t1 and t2 and t3) cnt += check(i + 1, 0, 0) + check(i+1,1,0);
    if (t1 and t2) cnt += check(i + 1, 1, 1);
    if (t1 and t2 and t3) cnt += check(i + 1, 0, 0);
    if (!t1 and !t2) cnt += check(i + 1, 0, 0);

    return dp[i][st] = cnt % mod;
}

void solve() {
    cin >> n;
    dp = vector<vector<ll>>(n, vector<ll>(4,-1));
    cout << check(0, 1, 1) << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
