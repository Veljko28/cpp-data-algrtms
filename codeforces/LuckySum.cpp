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

set<ll> s;

void gene(ll n) {
    if (n > 1e10) return;
    gene(n * 10 + 4);
    gene(n * 10 + 7);
    if (n) s.insert(n);
}


void solve() {
    ll l, r;
    cin >> l >> r;
    gene(0);
    ll ans = 0;
    while (l <= r) {
        auto v = s.lower_bound(l);
        int b = min(*v, r) - l + 1;
        ans += (*v) * b;
        l = min(*v, r)+1;
    }
    cout << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
