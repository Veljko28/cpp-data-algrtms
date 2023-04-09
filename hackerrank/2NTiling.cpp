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
vector<int> dp;

int check(int i) {
    if (i > n) return 0;
    if (dp[i] != -1) return dp[i];

    dp[i] = 0;
    if (i + 2 < n) dp[i] += 2 + check(i + 2);
    dp[i] += 1 + check(i + 1);

    return dp[i];

}

void solve() {
    cin >> n;
    dp =vector<int>(n+1, -1);
    check(0);
    cout << dp[0] << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
