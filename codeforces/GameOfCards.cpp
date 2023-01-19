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
    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> a(n);
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        a[i] = { r - l,{l,r} };
    }
    sort(all(a));
    vector<pair<pair<int, int>, int>> ans(n);
    vector<bool> visited(n + 1);
    for (int i = 0; i < n; i++) {
        for (int j = a[i].second.first; j <= a[i].second.second; j++) {
            if (visited[j]) continue;
            visited[j] = 1;
            ans[i] = { a[i].second,j };
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i].first.first << ' ' << ans[i].first.second << ' ' << ans[i].second << '\n';
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