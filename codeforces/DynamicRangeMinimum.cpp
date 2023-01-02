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
int k, v, l, r;
const int MAXN = (2e5) + 5;
const int inf = 1e9;
vector<int> values, tree(4 * MAXN);
 
void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = values[s];
        return;
    }
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);
 
    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
}
 
int findMinimum(int idx, int s, int e) {
    if (s >= l and e <= r) return tree[idx];
    if (s > r or e < l) return inf;
 
    int mid = (s + e) / 2;
    return min(findMinimum(2 * idx, s, mid), findMinimum(2 * idx + 1, mid + 1, e));
}
 
void updateValue(int idx, int s, int e) {
    if (s == e and s == k) {
        tree[idx] = v;
        return;
    }
 
    int mid = (s + e) / 2;
    if (k <= mid) updateValue(2 * idx, s, mid);
    else updateValue(2 * idx + 1, mid + 1, e);
    
    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
}
 
void solve() {
    cin >> n >> q;
    values = vector<int>(n+1);
    for (int i = 1; i <= n; i++) cin >> values[i];
    constructTree(1, 1, n);
    int x; 
    while (q--) {
        cin >> x;
        if (x == 1) {
            cin >> k >> v;
            updateValue(1, 1, n);
        }
        else {
            cin >> l >> r;
            cout << findMinimum(1, 1, n) << '\n';
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