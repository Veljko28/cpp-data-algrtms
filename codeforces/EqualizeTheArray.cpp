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
    map<int, int> m;
    for (int i =0,j;i<n;i++){
        cin >> j;
        m[j]++;
    }
    int ans = INT_MAX;
    set<int> s;
    for (pair<int, int> p : m) {
        int res = 0;
        if (s.find(p.second) != s.end()) continue;
        for (pair<int, int> b : m) {
            if (b.second >= p.second) res += b.second - p.second;
            else res += b.second;
        }
        ans = min(ans, res);
        s.insert(p.second);
    }
    cout << ans << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
