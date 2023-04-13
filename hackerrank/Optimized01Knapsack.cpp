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
    int n, w;
    cin >> n >> w;
    vector<int> values(n), weight(n);
    for (int& i : values) cin >> i;
    for (int& i : weight) cin >> i;
    
    vector<int> prev(w + 1), curr(w + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= w; j++) {
            curr[j] = prev[j];
            if (j >= weight[i-1]) {
                curr[j] = max(prev[j - weight[i-1]] + values[i-1], curr[j]);
            }
        }
        prev = curr;
    }
    cout << curr[w] << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
