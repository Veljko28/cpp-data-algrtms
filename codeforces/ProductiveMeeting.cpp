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
    priority_queue<pair<int,int>> pq;
    for (int i = 1, j; i <= n; i++) {
        cin >> j;
        pq.push({ j,i });
    }
    pair<int, int> p = pq.top();
    vector<pair<int, int>> ans;
    pq.pop();
    while (!pq.empty()) {
        pair<int, int> tp = pq.top();
        pq.pop();
        if (!tp.first) break;
        if (p.first == 0) {
            p = tp;
            continue;
        }
        ans.push_back({ p.second, tp.second });
        p.first--, tp.first--;
        if (tp.first) pq.push(tp);
    }
    cout << ans.size() << '\n';
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << ' ' << ans[i].second << '\n';
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
