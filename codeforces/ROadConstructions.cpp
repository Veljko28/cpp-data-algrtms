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
 
int n, m;
int mx = 0;
vector<int> parent, len;
 
int getParent(int i) {
    if (parent[i] == -1) return i;
    return parent[i] = getParent(parent[i]);
}
 
void merge(int a, int b) {
    a = getParent(a), b = getParent(b);
    if (a == b) return;
    n--;
    if (len[b] > len[a]) swap(a, b);
    parent[a] = b;
    len[b] += len[a];
    mx = max(len[b], mx);
}
 
void solve() {
    cin >> n >> m;
    parent = vector<int>(n + 1, -1);
    len = vector<int>(n + 1, 1);
    while (m--) {
        int l, r;
        cin >> l >> r;
        merge(l, r);
        cout << n << ' ' << mx << '\n';
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