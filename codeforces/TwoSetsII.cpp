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
    int n, s;
    cin >> n;
    s = n * (n + 1) / 2;
    if (s % 2) {
        cout << "0\n";
        return;
    }
    s /= 2;
    const int mod = 1e9 + 7;
    vector<ll> dp(1e5, 0);
    dp[0] = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = s; j > 0; j--) {
            if (j - (i + 1) >= 0) (dp[j] += dp[j - (i + 1)]) %= mod;
        }
    }
    cout << dp[s] % mod;
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}