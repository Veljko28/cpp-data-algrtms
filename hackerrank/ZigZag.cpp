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
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n == 1) {
        cout << "1\n";
        return;
    }
    vector<int> diff(n - 1);
    for (int i = 1; i < n; i++) {
        diff[i - 1] = a[i] - a[i - 1];
    }
    int idx = 0;
    while (idx < n - 1 and !diff[idx]) idx++;
    if (idx == n) {
        cout << "1\n";
        return;
    }
    int ans = 2;
    int v = diff[idx];
    for (int i = idx + 1; i < n - 1; i++) {
        if (diff[i] * v < 0) {
            v *= -1;
            ans++;
        }
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
