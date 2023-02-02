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


int tz;

ll getSum(vector<ll> a) {
    ll ans = 0;
    int z = 0;
    for (int i =0;i<a.size(); i++) {
        if (a[i] == 1) ans += tz - z;
        else z++;
    }
    return ans;
}


void solve() {
    int n;
    cin >> n;
    tz = 0;
    vector<ll> a(n);
    int last_one = -1, first_zero = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) first_zero = min(i, first_zero), tz++;
        if (a[i] == 1) last_one = i;
    }
    ll ans = getSum(a);
    if (last_one != -1) {
        a[last_one] = 0;
        tz++;
        ans = max(ans,getSum(a));
        tz--;
        a[last_one] = 1;
    }
    if (first_zero != n) {
        a[first_zero] = 1;
        tz--;
        ans = max(ans, getSum(a));
    }
    cout << ans << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}