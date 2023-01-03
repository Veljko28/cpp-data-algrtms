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
    int n, q;
    cin >> n >> q;
    vector<vector<int>> pref(n + 1, vector<int>(n + 1, 0));
    char c;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            pref[i][j] = pref[i][j - 1] + (c == '*');
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] += pref[i-1][j];
        }
    }
    int y1, x1, y2, x2;
    while (q--) {
        cin >> y1 >> x1 >> y2 >> x2;
        cout << pref[y2][x2] - pref[y2][x1-1] - pref[y1-1][x2] + pref[y1-1][x1-1] << '\n';
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