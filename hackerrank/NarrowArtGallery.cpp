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

int n, k;
vector<vector<vector<int>>> dp;
vector<vector<int>> a;
const int INF = 1e8;


int check(int i, int r, int c) {
    if (i == 0) return 0;
    if (r < 0) return INF;
    if (dp[i][r][c] != -1) return dp[i][r][c];

    return dp[i][r][c] = min(check(i - 1, r - 1, c) + a[r][c], min(check(i, r - 1, c), check(i, r - 1, c ^ 1)));
}


void solve() {
    cin >> n >> k;
    a = vector<vector<int>>(n, vector<int>(2));
    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
            s += a[i][j];
        }
    }
    int z;
    cin >> z >> z;
    dp = vector<vector<vector<int>>>(k + 1, vector<vector<int>>(n + 1, vector<int>(2,-1)));
    cout << s - min(check(k, n - 1, 0), check(k, n - 1, 1)) << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
