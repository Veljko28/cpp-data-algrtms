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
    int n;
    ll x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll& i : a) cin >> i;
    map<int, pair<int, int>> m;
    for (int i = 1; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int b = x - (a[i] + a[j]);
            if (m[b] != make_pair(0,0)) {
                cout << m[b].first << ' ' << m[b].second << ' ' << i + 1 << ' ' << j + 1 << '\n';
                return;
            }
        }
        for (int k = 0; k < i; k++) {
            m[a[i] + a[k]] = { k + 1,i + 1 };
        }
    }
    cout << "IMPOSSIBLE\n";
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}