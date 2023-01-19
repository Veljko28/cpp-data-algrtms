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
#include <unordered_set>
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
    vector<int> a(n), b(m);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;
    if (n == 1) {
        cout << b.back() << '\n';
        return;
    }
    for (int i = 0; i < m; i++) {
        auto f = min_element(all(a));
        a[f - a.begin()] = b[i];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i];
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