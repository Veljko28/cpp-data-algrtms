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
vector<int> values;
const int INF = 1e9 + 5;

void solve() {
    cin >> n;
    values = vector<int>(n);
    for (int& i : values) cin >> i;
    vector<int> dp(n, INF);
    dp[0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j : {i + 1, i + 2}) {
            if (j < n) {
                dp[j] = min(dp[j], dp[i] + abs(values[i] - values[j]));
            }
        }
    }
    cout << dp[n-1] << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
