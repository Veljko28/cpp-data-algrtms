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

const int MAXN = 1e5 + 5;


vector<int> values, freq;
vector<int> tree(4 * MAXN), lf(4*MAXN), rt(4*MAXN);
int l, r;
int ans = 0;

void constructTree(int idx, int s, int e) {
    if (s == e) {
        tree[idx] = lf[idx] = rt[idx] = 1;
        return;
    }

    int mid = s + (e - s) / 2;
    constructTree(2 * idx, s, mid);
    constructTree(2 * idx + 1, mid + 1, e);

    tree[idx] = max(tree[2 * idx], tree[2 * idx + 1]);
    if (values[mid] == values[mid + 1]) {
        tree[idx] = max(tree[idx], rt[2 * idx] + lf[2 * idx + 1]);
    }
    lf[idx] = lf[2 * idx];
    if (values[mid+1] == values[s]) lf[idx] += lf[2 * idx + 1];
    rt[idx] = rt[2 * idx + 1];
    if (values[mid] == values[e]) rt[idx] += rt[2 * idx];
}

void search(int idx, int s, int e) {
    if (s > r or e < l) return;
    if (s >= l and e <= r) {
        ans = max(ans, tree[idx]);
        return;
    }

    int mid = s + (e - s) / 2;
    search(2 * idx, s, mid);
    search(2 * idx + 1, mid + 1, e);

    if (values[mid] == values[mid + 1]) {
        int a = min(rt[2 * idx], mid - l + 1);
        int b = min(lf[2 * idx + 1], r - mid);
        ans = max(ans, a + b);
    }
}


void solve() {
    int n, q;
    while (cin >> n and n) {
        cin >> q;
        values = vector<int>(n + 2);
        for (int i = 1; i <= n; i++) {
            cin >> values[i];
        }
        constructTree(1, 1, n);
        while (q--) {
            ans = 0;
            cin >> l >> r;
            search(1, 1, n);
            cout << ans << '\n';
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
