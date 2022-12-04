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
    vector<int> a(n);
    for (int& i : a) cin >> i;
    vector<int> right(n+1,1), left(n+1,1);
    int ans = 0;

    // first isn't important (0)
    for (int i = 1; i < n;i++) {
        if (a[i-1] < a[i]) left[i] = left[i-1] + 1;
        ans = max(ans, left[i]);
    }

    // last one isn't important (n-1)
    for (int i = n - 2; i >= 0; i--) {
        if (a[i+1] > a[i]) right[i] = right[i + 1] + 1;
        ans = max(ans, right[i]);
    }

    for (int i = 0; i < n - 2; i++) {
        if (a[i] < a[i+2]) ans = max(ans, left[i] + right[i + 2]);
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