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
 
const int MAXN = 2e5 + 5;
int n, m;
vector<int> rooms, tree(4*MAXN);
int v;
 
 
void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = rooms[s];
        return;
    }
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);
 
    tree[idx] = max(tree[2 * idx], tree[2 * idx + 1]);
}
 
int query(int idx, int s, int e) {
    if (tree[idx] < v) return 0;
    if (s == e) {
        tree[idx] -= v;
        return s;
    }
    int mid = (s + e) / 2;
    int ans;
    if (tree[2 * idx] >= v) {
        ans = query(2 * idx, s, mid);
    }
    else {
        ans = query(2 * idx + 1, mid + 1, e);
    }
    tree[idx] = max(tree[2 * idx], tree[2 * idx + 1]);
    return ans;
}
 
void solve() {
    cin >> n >> m;
    rooms = vector<int>(n+1);
    for (int i = 1; i <= n; i++) cin >> rooms[i];
    constructTree(1, 1, n);
    while (m--) {
        cin >> v;
        cout << query(1, 1, n) << ' ';
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