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
 
 
const ll inf = 1e18;
 
void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<ll>> a(n + 1, vector<ll>(n+1, inf));
    for (int i = 1; i <= n; i++) a[i][i] = 0;
    for (int i = 1; i <= m; i++) {
        int l, r;
        ll c;
        cin >> l >> r >> c;
        a[l][r] = min(a[l][r],c);
        a[r][l] = min(a[r][l],c);
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                a[j][k] = min(a[j][k], a[j][i] + a[i][k]);
            }
        }
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        if (a[l][r] == inf) cout << "-1\n";
        else cout << a[l][r] << '\n';
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