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

int n;
vector<ll> a;

ll g(int i) {
    if (a[i - 1] >= a[i] or a[i + 1] >= a[i]) {
        return max(a[i - 1], a[i + 1]) + 1 - a[i];
    }
    return 0LL;
}

void solve() {
    cin >> n;
    a = vector<ll>(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll ans = 0;
    for (int i = 2; i < n; i += 2) {
        ans += g(i);
    }
    if (n % 2) cout << ans << '\n';
    else {
        ll b = ans;
        for (int i = n - 1; i > 1; i -= 2) {
            b -= g(i - 1);
            b += g(i);
            ans = min(ans, b);
        }
        cout << ans << '\n';
    }
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
