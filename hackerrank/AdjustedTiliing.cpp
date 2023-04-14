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

vector<ll> dp;
map<int, int> freq;

ll check(ll n) {
    if (n == 0) return 1;
    if (dp[n] != -1) return dp[n];

    dp[n] = 0;
    for (auto p : freq) {
        if (n >= p.first) {
            dp[n] += check(n - p.first) * p.second;
        }
    }

    return dp[n];
}


void solve() {
    ll n;
    int k;
    cin >> n >> k;
    for (int i = 0, j; i < k; i++) {
        cin >> j;
        freq[j]++;
    }
    dp = vector<ll>(n+1); // moze i mapa
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (auto p : freq) {
            if (i >= p.first) {
                dp[i] += dp[i - p.first] * p.second;
            }
        }
    }
    cout << "Iterative: " << dp[n] << '\n';
    dp = vector<ll>(n + 1, -1);
    dp[0] = 1;
    cout << "Recursive: " << check(n) << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
