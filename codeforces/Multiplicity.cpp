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
vector<ll> values;
vector<ll> dp;
const int mod = 1e9+7;


void solve() {
    cin >> n;
    dp = vector<ll>(1e6 + 5);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        vector<int> div;
        for (int j = 1; j * j <= a; j++) {
            if (a % j == 0) {
                div.push_back(j);
                if (a/j != j)
                    div.push_back(a/j);
            }
        }
        sort(all(div), greater<int>());
        for (int i : div) {
            dp[i] += dp[i - 1];
            dp[i] %= mod;
        }
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) ans += dp[i];
    cout << ans % mod << '\n';

}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
