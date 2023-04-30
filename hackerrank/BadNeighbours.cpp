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
vector<vector<int>> dp;

int check(int i, bool first) {
    if (i > n-1 or (i == n-1 and first)) return 0;
    if (i == n - 1) return values[i];
    if (dp[first][i] != -1) {
        return dp[first][i];
    }
    return dp[first][i] = max(check(i+1, first), check(i+2,first) + values[i]);
}


void solve() {
    cin >> n;
    dp = vector<vector<int>>(2, vector<int>(n,-1));
    for (int& i : values) cin >> i;
    cout << max(check(2,1)+values[0], check(1,0)) << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
