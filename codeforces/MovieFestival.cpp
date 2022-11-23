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
 
bool customSort(pair<int, int>& a, pair<int, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return b.second > a.second;
}
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a), customSort);
    int ans = 1, i = 1;
    int curr = a[0].second;
    while (i < n) {
        if (a[i].first >= curr) ans++, curr = a[i].second;
        i++;
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