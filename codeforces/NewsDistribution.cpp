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
const int N = 5 * 1e5 + 10;
vector<int> parent(N), value(N,1);

int getParent(int val) {
    if (parent[val] == val) return val;
    return parent[val] = getParent(parent[val]);
}

void test(int v, int prev) {
    int pv = getParent(v), pp = getParent(prev);
    if (pv == pp) return;
    if (value[pv] < value[pp]) swap(pv, pp);
    parent[pp] = pv;
    value[pv] += value[pp];
}

void solve() {
    cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
    }
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        int prev = -1;
        for (int j = 0; j < k; j++) {
            int v;
            cin >> v;
            if (prev != -1) test(v,prev);
            prev = v;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout << value[getParent(i)] << ' ';
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