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
    int n, m;
    cin >> n >> m;
    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int ans = 0;
    ll s = 0;
    priority_queue<ll> pq,p;
    for (int i = m + 1; i <= n; i++) {
        s += a[i];
        if (a[i] < 0) pq.push(-a[i]);
        while (s < 0) {
            s += pq.top() * 2;
            pq.pop();
            ans++;
        }
    }
    s = 0;
    for (int i = m; i > 1; i--) {
        s -= a[i];
        if (a[i] > 0) p.push(a[i]);
        while (s < 0) {
            s += p.top() * 2;
            p.pop();
            ans++;
        }
    }
    cout << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}