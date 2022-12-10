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
vector<ll> a;

bool valid(ll v) {
    ll s = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {
        if (s + a[i] > v) {
            b++;
            s = a[i];
        }
        else s += a[i];
    }
    if (s) b++;
    return b <= k;
}


void solve() {
    cin >> n >> k;
    a = vector<ll>(n);
    ll l = 0;
    for (ll& i : a) {
        cin >> i;
        l = max(l, i);
    }
    ll r = 1e18;
    ll ans = 1e18;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (valid(mid)) {
            ans = min(ans, mid);
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans;
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}