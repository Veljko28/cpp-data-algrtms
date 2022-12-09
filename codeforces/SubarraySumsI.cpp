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
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    vector<ll> pref(n+1);
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + a[i-1];
    }
    int ans = 0;
    int i = 1, j = 0;
    while (i <= n) {
        if (pref[i] - pref[j] == x) ans++;
        while (pref[i] - pref[j] >= x) j++,ans += (pref[i] - pref[j] == x);
        i++;
    }
    cout << ans;
}
 
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}