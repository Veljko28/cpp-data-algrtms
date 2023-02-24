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
    vector<int> cnt(2e5 + 5);
    vector<int> a(n);
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        cnt[j]++;
        a[i] = j;
    }
    int mx = 2e5 + 5;
    int curr_idx = 0;
    vector<int> ans;
    while (true) {
        if (curr_idx >= n) break;
        int mex = find(cnt.begin(), cnt.begin() + mx, 0) - cnt.begin();
        mx = mex;
        ans.push_back(mx);
        vector<bool> needed(mx + 1);
        int taken = 0;
        for (curr_idx; curr_idx < n; curr_idx++) {
            cnt[a[curr_idx]]--;
            if (a[curr_idx] <= mx and !needed[a[curr_idx]]) {
                taken++;
                needed[a[curr_idx]] = 1;
            }

            if (taken == mx) break;
        }
        curr_idx++;
    }
    cout << ans.size() << '\n';
    for (int i : ans) {
        cout << i << ' ';
    }
    cout << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
