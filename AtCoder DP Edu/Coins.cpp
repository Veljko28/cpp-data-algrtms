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
    int n;
    cin >> n;
    vector<double> dp(n + 1);
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        double d; cin >> d;
        for (int j = i + 1; j >= 0; j--) {
            dp[j] = (j == 0 ? 0 : dp[j - 1] * d) + dp[j] * (1 - d);
        }
    }
    double ans = 0;
    for (int i = (n+1)/2; i <= n; i++) {
        ans += dp[i];
    }
    cout << setprecision(10) << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
