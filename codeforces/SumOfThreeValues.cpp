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

struct range {
    int r;
    int l;
    int idx;
    bool operator < (const range& b) const {
        if (l == b.l) {
            return r > b.r;
        }
        return l < b.l;
    }
};


void solve() {
    ll n, x;
    cin >> n >> x;
    vector<pair<ll,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(all(a));
    for (int i = 0; i < n; i++) {
        int k = n - 1;
        for (int j = i + 1; j < k; j++) {
            ll sum = a[i].first + a[j].first + a[k].first;
            while (sum > x) {
                k--;
                if (!k) break;
                sum = a[i].first + a[j].first + a[k].first;
            }
            if (!k) break;
            if (sum == x and j<k) {
                cout << a[i].second << ' ' << a[j].second << ' ' << a[k].second << '\n';
                return;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}