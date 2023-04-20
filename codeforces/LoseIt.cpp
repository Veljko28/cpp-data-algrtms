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
    for (int& i : a) cin >> i;
    vector<int> values = { 4, 8, 15, 16, 23, 42 };
    vector<vector<int>> b(6);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            if (values[j] == a[i]) {
                b[j].push_back(i);
                break;
            }
        }
    }
    bool ok = 1;
    for (int i = 0; i < 6; i++) {
        if (!b[i].size()) {
            ok = 0;
            break;
        }
        sort(all(b[i]));
    }
    int ans = 0;
    vector<int> idxs(6, 0);
    while (ok) {
        if (idxs[0] >= b[0].size()) break;
        int c = b[0][idxs[0]];
        int skip = 0;
        for (int i = 1; i < 6; i++) {
            while (b[i][idxs[i]] < c) {
                if (idxs[i] + 1 >= b[i].size()) {
                    ok = 0;
                    break;
                }
                idxs[i]++;
                skip++;
            }
            if (!ok) break;
            c = b[i][idxs[i]];
        }
        ans += skip;
        if (ok) {
            for (int i = 0; i < 6; i++) idxs[i]++;
        }
    }

    for (int i = 0; i < 6; i++) {
        ans += b[i].size() - idxs[i];
    }
    cout << ans << '\n';

}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
