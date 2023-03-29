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
    int l, r;
    cin >> l >> r;
    int ans = 0;
    int num = 0;
    for (l; l <= r; l++) {
        string s = to_string(l);
        int mx = INT_MIN, mn = INT_MAX;
        for (char c : s) {
            mx = max(mx, c - '0');
            mn = min(mn, c - '0');

        }
        if (mx - mn >= ans) {
            ans = mx - mn;
            num = l;
        }
        if (ans == 9) {
            break;
        }
    }
    cout << num << "\n";
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
