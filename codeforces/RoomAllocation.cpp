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
    vector<pair<pair<int, int>, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }
    sort(all(a));
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> ans(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        int room;
        if (pq.empty()) {
            pq.push({ a[i].first.second, 1 });
            room = 1;
        }
        else {
            if (pq.top().first < a[i].first.first) {
                room = pq.top().second;
                pq.pop();
                pq.push({ a[i].first.second, room });
            }
            else {
                room = (int)pq.size() + 1;
                pq.push({ a[i].first.second, room });
            }
        }
        ans[a[i].second] = room;
        mx = max(mx, room);
    }
    cout << mx << '\n';
    for (int i : ans) {
        cout << i << ' ';
    }
    cout << '\n';
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}