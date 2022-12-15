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
    int n, m;
    cin >> n >> m;
    vector<vector<pair<ll,int>>> a(n + 1);
    vector<ll> dist(n + 1, inf);
    dist[1] = 0;
    for (int i = 0; i < m; i++) {
        int k,l, r;
        cin >> k >> l >> r;
        a[k].push_back({ r,l });
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    pq.push({0,1});
    while (!pq.empty()) {
        pair<ll,int> i = pq.top();
        pq.pop();
        if (dist[i.second] < i.first) continue;
        for (pair<ll, int> p : a[i.second]) {
            if (dist[p.second] > i.first + p.first) {
                dist[p.second] = i.first + p.first;
                pq.push({ dist[p.second], p.second });
            }
        }
    }
 
    for (int i =1;i<=n;i++){
        cout << dist[i] << ' ';
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