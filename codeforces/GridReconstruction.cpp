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
    vector<vector<int>> a(2, vector<int>(n));
    int mx = 2 * n;
    int mn = 1;
    a[0][0] = mx--;
    a[1][n - 1] = mx--;
    bool ok = 0;
    for (int i = 0; i < n - 1; i++) {
        if (ok) {
            a[0][i + 1] = mx--;
            a[1][i] = mx--;
        }
        else {
            a[1][i] = mn++;
            a[0][i + 1] = mn++;
        }
        ok ^= 1;
    }
    for (vector<int> v : a) {
        for (int i : v) cout << i << ' ';
        cout << '\n';
    }
    cout << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
