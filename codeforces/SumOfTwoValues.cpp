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
    ll n,x;
    cin >> n >> x;
    map<int, vector<int>> m;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        m[j].push_back(i + 1);
    }
    for (pair<int, vector<int>> p : m) {
        if (!p.second.size()) continue;
        if (x%2==0 and (x / 2) == p.first and p.second.size() > 1) {
            cout << p.second[0] << ' ' << p.second[1] << '\n';
            return;
        }
 
        if (x-p.first != p.first and m[x - p.first].size()) {
            if (p.second[0] > m[x - p.first][0]) {
                cout << m[x - p.first][0] << ' ' << p.second[0] << '\n';
            }
            else cout << p.second[0] << ' ' << m[x - p.first][0] << '\n';
            return;
        }
    }
    cout << "IMPOSSIBLE\n";
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}