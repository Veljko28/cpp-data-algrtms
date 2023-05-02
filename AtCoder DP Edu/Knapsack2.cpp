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
    ll n, W;
    cin >> n >> W;
    vector<int> weight(n), value(n);
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
        sum += value[i];
    }
    vector<ll> dp(sum + 1, INF); // minimum weight required to get i value
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = sum - value[i]; j >= 0; j--) {
            dp[j + value[i]] = min(dp[j + value[i]], dp[j] + weight[i]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= sum; i++) {
        if (dp[i] <= W) {
            ans = i;
        }
    }
    cout << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
