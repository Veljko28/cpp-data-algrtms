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
 
const ll inf = 1e18;
 
void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<pair<int,int>>> a(n + 1);
    for (int i = 0; i < m; i++) {
        int l, r, c;
        cin >> l >> r >> c;
        a[l].push_back({ c,r });
    }
    priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
    vector<vector<ll>> dist(n + 1, vector<ll>(k,inf));
    pq.push({ 0,1 });
    while (!pq.empty()) {
        ll p = pq.top().second, v = pq.top().first;
        pq.pop();
        if (dist[p][k - 1] < v) continue;
        for (pair<ll, int> b : a[p]) {
            if (dist[b.second][k - 1] > v + b.first) {
                dist[b.second][k - 1] = v + b.first;
                pq.push({ v + b.first, b.second });
                sort(all(dist[b.second]));
            }
        }
    }
    for (ll i : dist[n]) cout << i << ' ';
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