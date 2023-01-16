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
#include <unordered_set>
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int& i : v) cin >> i;
    int f;
    while (m--) {
        cin >> f;
        int l = 0, r = n - 1;
        int ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;

            if (v[mid] == f) 
                ans = mid;

            if (v[mid] < f) l = mid + 1;
            else r = mid - 1;
        }
        cout << ans << '\n';
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