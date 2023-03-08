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
    vector<pair<int, int>> a(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first;
        a[i].first = n - a[i].first;
        a[i].second = i;
    }
    sort(a.begin() + 1, a.begin() + n + 1);
    bool ok = 1;
    vector<int> ans(n + 1);
    int b = 0;
    for (int l = 1, r = 0; l <= n; l = r + 1) {
        r = l;
        while (r < n and a[r].first == a[r + 1].first) r++;
        if ((r - l + 1) % a[l].first) {
            ok = 0;
            break;
        }
        for (int i = l; i <= r; i += a[l].first) {
            b++;
            for (int j = i; j < i+a[l].first; j++) ans[a[j].second] = b;
        }
    }

    if (ok) {
        cout << "Possible\n";
        for (int i = 1; i <= n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    else cout << "Impossible\n";
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
