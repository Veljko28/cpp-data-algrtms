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
 
 
int n, q;
ll l, r, v, k;
const int MAXN = (2e5) + 5;
vector<ll> values, tree(4*MAXN,0), lazy(4*MAXN,0);
 
void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = values[s];
        return;
    }
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);
}
 
ll valueAt(int idx, int s, int e) {
    if (lazy[idx] != 0) {
        tree[idx] += (lazy[idx] * (e-s+1));
        if (s != e) {
            lazy[2 * idx] += lazy[idx];
            lazy[2 * idx + 1] += lazy[idx]; 
        }
        lazy[idx] = 0;
    }
 
    if (s == e and s == k) {
        return tree[idx];
    }
 
    int mid = (s + e) / 2;
    if (k <= mid) return valueAt(2 * idx, s, mid);
    else return valueAt(2 * idx + 1, mid + 1, e);
}
 
void updateRange(int idx, int s, int e) {
    if (s >= l and e <= r) {
        lazy[idx] += v;
        return;
    }
    if (e < l or s > r) return;
    
    int mid = (s + e) / 2;
    updateRange(2 * idx, s, mid);
    updateRange(2 * idx + 1, mid + 1, e);
}
 
void solve() {
    cin >> n >> q;
    values = vector<ll>(n+1);
    for (int i = 1; i <= n; i++) cin >> values[i];
    constructTree(1, 1, n);
    int x; 
    while (q--) {
        cin >> x;
        if (x == 1) {
            cin >> l >> r >> v;
            updateRange(1, 1, n);
        }
        else {
            cin >> k;
            cout << valueAt(1, 1, n) << '\n';
        }
    }
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}