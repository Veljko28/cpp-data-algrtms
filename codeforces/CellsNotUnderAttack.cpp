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
    ll n, m;
    cin >> n >> m;
    ll ans = (n * n);
    vector<bool> col(n + 1), row(n + 1);
    ll l, r;
    int rm = 0, cm = 0;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        if (!col[l]) {
            col[l] = 1;
            ans -= (n - rm);
            cm++;
        }
        if (!row[r]) {
            row[r] = 1;
            ans -= (n - cm);
            rm++;
        }
        cout << ans << ' ';
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
