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
vector<ll> a, tree;

void update(int idx, int val) {
    while (idx <= n) {
        tree[idx] += val;
        idx += idx & (-idx);
    }
}

ll ssum(int idx) {
    ll ans = 0;
    while (idx > 0) {
        ans += tree[idx];
        idx -= idx & (-idx);
    }
    return ans;
}

void sum(int l, int r) {
    cout << ssum(r) - ssum(l - 1) << '\n';
}

void solve() {
    cin >> n >> q;
    a = tree = vector<ll>(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        update(i, a[i]);
    }
    while (q--) {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1) {
            update(l, r - a[l]);
            a[l] = r;
        }
        else {
            sum(l, r);
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