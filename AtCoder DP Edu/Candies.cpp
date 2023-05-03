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

void add_mod(int& a, int b) {
    a += b;
    if (a >= mod) {
        a -= mod;
    }
}


void sub_mod(int& a, int b) {
    a -= b;
    if (a < 0) {
        a += mod;
    }
}


void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> dp(k + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        int mx;
        cin >> mx;
        vector<int> a(k + 1);
        for (int j = k; j >= 0; j--) {
            int c = dp[j];
            int l = j + 1, r = j + min(k-j, mx);
            if (l <= r) {
                add_mod(a[l], c);
                if (r+1 <= k) sub_mod(a[r+1], c);
            }
        }
        int pref = 0;
        for (int j = 0; j <= k; j++) {
            add_mod(pref, a[j]);
            add_mod(dp[j], pref);
        }
    }
    cout << dp[k] << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
