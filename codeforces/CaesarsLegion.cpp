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

int n1, n2, k1, k2;
const int mod = 1e8;
ll dp[101][101][11][11];

ll check(int x, int y, int a, int b) {
    if (!(x+y)) {
        return 1;
    }
    if (dp[x][y][a][b] != -1) return dp[x][y][a][b];

    ll c = 0;
    if (x and a) {
        c += check(x - 1, y, a-1, k2);
    }
    if (y and b) {
        c += check(x, y-1, k1, b-1);
    }

    return dp[x][y][a][b] = c % mod;
}


void solve() {
    cin >> n1 >> n2 >> k1 >> k2;
    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            for (int k = 0; k <= k1; k++) {
                for (int o = 0; o <= k2; o++) {
                    dp[i][j][k][o] = -1;
                }
            }
        }
    }
    cout << check(n1, n2, k1, k2) % mod << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
