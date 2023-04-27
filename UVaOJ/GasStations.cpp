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
    int l, n;
    cin >> l >> n;
    while (l and n) {
        vector<pair<int,int>> a(n);
        for (int i = 0; i < n; i++) {
            int x, r;
            cin >> x >> r;
            a[i] = { x - r, x + r };
        }
        sort(all(a));
        int i = 0;
        int ans = n;
        int b = 0, c = 0;
        while (b < l) {
            c = b;

            while (i < n and a[i].first <= b) {
                c = max(c, a[i].second);
                i++;
            }

            if (b == c) break;
            ans--;
            b = c;
        }

        if (b < l) cout << "-1\n";
        else cout << ans << '\n';
        cin >> l >> n;
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
