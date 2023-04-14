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
    int c, n, m;
    cin >> c >> n >> m;
    vector<vector<ll>> farms(51, vector<ll>(1001));
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        farms[0][j]++;
    }
    vector<int> queries(m);
    for (int& i : queries) cin >> i;
    for (int i = 1; i <= 50; i++) {
        for (int j = 1; j <= 1000; j++) {
            if (j > c/2) {
                farms[i][j] += 2 * farms[i - 1][j];
            }
            else farms[i][2 * j] += farms[i - 1][j];
        }
    }

    for (int i : queries) {
        cout << accumulate(all(farms[i]), 0LL) << '\n';
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
