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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> cnt(2001);
    for (int& i : a) {
        cin >> i; 
        cnt[i]++;
    }
    int q;
    cin >> q;
    vector<pair<pair<int, int>,int>> b(q);
    for (int i = 0; i < q; i++) {
        int x, k;
        cin >> x >> k;
        x--;
        b[i] = { { k,x }, i };
    }
    sort(all(b));
    int i = 0, j = 0;
    bool ok = 0;
    vector<int> ans(q);
    while (i < q) {
        if (b[i].first.first == j or ok) {
            ans[b[i].second] = a[b[i].first.second];
            i++;
            continue;
        }
        vector<int> cnt2(2001);
        for (int i = 0; i < n; i++) {
            a[i] = cnt[a[i]];
            cnt2[a[i]]++;
        }
        if (cnt == cnt2) {
            ok = 1;
        }
        cnt = cnt2;
        j++;
    }
    for (int i : ans) {
        cout << i << '\n';
    }
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
