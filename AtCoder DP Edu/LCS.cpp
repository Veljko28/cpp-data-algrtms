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
    string a, b;
    cin >> a >> b;
    int n = (int)a.length(), m = (int)b.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

   /* for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            cout << dp[i][j] << ' ';
        }
        cout << '\n';
    }*/

    int i = n, j = m;
    string ans;
    while (dp[i][j] != 0) {
        bool ok = 0, ok2 = 0;
        if (i - 1 >= 0 and dp[i][j] > dp[i - 1][j]) {
            ok = 1;
        }
        if (j - 1 >= 0 and dp[i][j] > dp[i][j - 1]) {
            ok2 = 1;
        }
        if (ok and ok2) {
            ans += a[i - 1];
            i--, j--;
        }
        else if (ok) j--;
        else i--;
    }
    for (int i = ans.length() - 1; i >= 0; i--) {
        cout << ans[i];
    }
    cout << '\n';

}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
