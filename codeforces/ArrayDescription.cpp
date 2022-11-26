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
 
int n, m;
vector<int> a;
const int mod = 1e9 + 7;
 
 
void solve() {
    cin >> n >> m;
    a = vector<int>(n);
    for (int& i : a) cin >> i;
    vector<ll> prev(m + 2, 0);
    if (a[0] == 0) {
        for (int i = 1; i <= m; i++) {
            prev[i] = 1;
        }
    }
    else prev[a[0]] = 1;
 
    for (int i =1;i<n;i++){
        vector<ll> curr(m + 2, 0);
        for (int j = 1; j <= m; j++) {
            if (a[i] == 0) curr[j] += (prev[j - 1] + prev[j] + prev[j + 1]) % mod;
            else {
                curr[a[i]] += (prev[a[i] - 1] + prev[a[i]] + prev[a[i] + 1]) % mod;
                break;
            }
       }
       prev = curr;
    }
    ll ans = 0;
    for (int i = 1; i <= m; i++) {
        ans += prev[i] % mod;
    }
    cout << ans % mod << '\n';
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}