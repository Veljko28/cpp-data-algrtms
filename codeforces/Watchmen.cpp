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


#define pll pair<ll,ll>

void solve() {
    int n;
    cin >> n;
    vector<pll> a(n);
    for (pll& i : a) cin >> i.first >> i.second;
    map<ll, ll> x, y;
    map<pll, ll> c;
    for (int i = 0; i < n; i++) {
        x[a[i].first]++;
        y[a[i].second]++;
        c[a[i]]++;
    }
    ll ans = 0, same = 0;
    for (pll i : x) {
        ans += (i.second * (i.second - 1) / 2);
    }
    for (pll i : y) {
        ans += (i.second * (i.second - 1) / 2);
    }
    for (pair<pll, ll> i : c) {
        same += (i.second * (i.second - 1) / 2);
    }
    cout << ans - same << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}