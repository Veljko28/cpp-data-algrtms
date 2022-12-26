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
 
int n;
vector<int> portals, ans;
vector<bool> visited;
queue<int> path;
int d = 0;
 
void check(int i) {
    path.push(i);
    if (visited[i]) {
        d += ans[i];
        return;
    }
    visited[i] = 1;
 
    d++;
    check(portals[i]);
}
 
void solve() {
    cin >> n;
    portals = ans = vector<int>(n);
    visited = vector<bool>(n,0);
    for (int& i : portals) {
        cin >> i;
        i--;
    }
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        d = 0;
        check(i);
        int m = 1;
        while (!path.empty()) {
            if (path.front() == path.back()) m = 0;
            ans[path.front()] = d;
            d -= m;
            path.pop();
        }
    }
    for (int i : ans) cout << i << ' ';
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