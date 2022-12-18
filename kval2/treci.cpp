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

int n, m;
vector<vector<ll>> a; 
const ll inf = 1e18;

#define point pair<ll, pair<ll,pair<int,int>>>
#define ff first
#define ss second

int h(pair<int,int> g) {
    return (n - g.ff) + (m - g.ss);
}
void solve() {
    cin >> n >> m;
    a = vector<vector<ll>>(n, vector<ll>(m));
    for (vector<ll>& v : a) {
        for (ll& i : v) cin >> i;
    }
    int q;
    cin >> q;
    while (q--) { // a* sa manhattan distance
        int x, y;
        cin >> x >> y;
        x--, y--;
        ll t = a[x][y];
        a[x][y] = inf;
        priority_queue<point, vector<point>, greater<point>> pq;
        ll ans = 0;
        pq.push({ 0,{a[0][0],{0,0}}});
        while (!pq.empty()) {
            point p = pq.top();
            pair<int, int> g = p.ss.ss;
            pq.pop();
            if (g.ff == n - 1 and g.ss == m - 1) {
                ans = p.ss.ff;
                break;
            }
            
            if (g.ff + 1 < n) {
                g.ff++;
                pq.push({ h(g) + p.ss.ff + a[g.ff][g.ss], {p.ss.ff + a[g.ff][g.ss], g } });
                g.ff--;
            }
            if (g.ss + 1 < m) {
                g.ss++;
                pq.push({ h(g) + p.ss.ff + a[g.ff][g.ss], {p.ss.ff + a[g.ff][g.ss], g } });
                g.ss--;
            }
        }
        cout << ans << '\n';
        a[x][y] = t;
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