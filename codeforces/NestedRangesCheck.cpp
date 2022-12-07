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
 
struct range {
    int r;
    int l;
    int idx;
    bool operator < (const range& b) const {
        if (l == b.l) {
            return r > b.r;
        }
        return l < b.l;
    }
};
 
 
void solve() {
    int n;
    cin >> n;
    vector<range> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].idx = i;
;    }
    sort(all(a));
    vector<int> ans(n,0);
    int mx = 1e9+5;
    for (int i = n-1; i >= 0; i--) {
        if (a[i].r >= mx) ans[a[i].idx] = 1;
        mx = min(a[i].r, mx);
    }
    for (int i : ans) cout << i << ' ';
    cout << '\n';
    ans = vector<int>(n, 0);
    mx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].r <= mx) ans[a[i].idx] = 1;
        mx = max(mx, a[i].r);
    }
    for (int i : ans) cout << i << ' ';
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