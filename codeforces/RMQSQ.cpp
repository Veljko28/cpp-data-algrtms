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
 
 
const int MAXN = (int)1e5 + 5;
int n;
int l, r;
vector<int> a, tree;
 
void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = a[s];
        return;
    }
 
    int mid = (s + e) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);
 
    tree[idx] = min(tree[2 * idx], tree[2 * idx + 1]);
}
 
int lookup(int idx, int a, int b) {
    if (b < l or a > r) return INT_MAX;
    if (a >= l and b <= r) return tree[idx];
 
    int mid = (a + b) / 2;
    return min(lookup(idx * 2, a, mid), lookup(idx * 2 + 1, mid + 1, b));
}
 
void solve() {
    cin >> n;
    a = vector<int>(MAXN, INT_MAX);
    for (int i = 1; i <= n; i++) cin >> a[i];
    tree = vector<int>(4*MAXN, INT_MAX);
    constructTree(1,1,n);
    int q;
    cin >> q;
    while (q--) {
        cin >> l >> r;
        l++;
        r++;
        cout << lookup(1,1,n) << '\n';
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