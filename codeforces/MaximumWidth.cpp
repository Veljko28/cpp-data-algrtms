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
    string s, t;
    cin >> s >> t;
    vector<ll> mn(m), mx(m);
    int j = 0;
    for (int i = 0; i < n and j < m; i++) {
        if (s[i] == t[j]) {
            mn[j] = i;
            j++;
        }
    }
    j = m - 1;
    for (int i = n - 1; i >= 0 and j>=0; i--) {
        if (s[i] == t[j]) {
            mx[j] = i;
            j--;
        }
    }
    ll ans = 0;
    for (int i = 0; i < m-1; i++) {
        ans = max(ans, mx[i+1] - mn[i]);
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