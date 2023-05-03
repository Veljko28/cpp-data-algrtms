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


const ll INF = 1e18L + 5;

void solve() {
    int n;
    cin >> n;
    vector<ll> val(n);
    for (ll& i : val) cin >> i;
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, INF));
    auto sum = [&](int l, int r) {
        ll s = 0;
        for (int i = l; i <= r; i++) {
            s += val[i];
        }
        return s;
    };
    for (int l = n - 1; l >= 0; l--) {
        for (int r = l; r < n; r++) {
            if (l == r) dp[l][r] = 0;
            else {
                ll tmp = sum(l, r);
                for (int i = l; i < r; i++) {
                    dp[l][r] = min(dp[l][r], dp[l][i] + dp[i+1][r] + tmp);
                }
            }
        }
    }
    cout << dp[0][n - 1];
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
