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
 
int maxlog = 30;
vector<vector<int>> dp;
 
int check(int l, int r) {
    for (int i = 0; i < maxlog; i++) {
        if (r & (1 << i)) l = dp[l][i];
    }
    return l;
}
 
void solve() {
    int n, q;
    cin >> n >> q;
    dp = vector<vector<int>>(n+1, vector<int>(30));
    for (int i = 1; i <= n; i++) {
        cin >> dp[i][0];
    }
    for (int i = 1; i < maxlog; i++) {
        for (int j = 1; j <= n; j++) {
            dp[j][i] = dp[dp[j][i-1]][i - 1];
        }
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << check(l, r) << "\n";
    }
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}