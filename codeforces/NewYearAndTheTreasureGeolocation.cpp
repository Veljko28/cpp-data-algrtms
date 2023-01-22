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
    vector<pair<int, int>> points(n), clue(n);
    for (pair<int, int>& p : points) cin >> p.first >> p.second;
    for (pair<int, int>& p : clue) cin >> p.first >> p.second;
    sort(all(points));
    sort(all(clue), greater<pair<int, int>>());
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = { points[i].first + clue[i].first, points[i].second + clue[i].second };
    }
    sort(all(ans));
    cout << ans[0].first << ' ' << ans[0].second << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}