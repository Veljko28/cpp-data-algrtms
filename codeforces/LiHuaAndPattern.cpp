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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int diff = 0;
    int r = n - 1, c = n - 1;
    for (int i = 0; i < (n+1)/2; i++) {
        for (int j = 0; j < n; j++,c--) {
            if (i == n / 2 and j == n / 2) break;
            if (a[i][j] != a[r][c]) diff++;
        }
        r--, c = n - 1;
    }
    if (diff <= k) {
        if (n % 2 or (n % 2 == 0 and (k - diff) % 2 == 0)) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
