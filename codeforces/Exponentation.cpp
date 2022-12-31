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

const int mod = 1e9 + 7;

ll check(ll l, ll r) {
    if (r == 0) return 1;
    ll ans = check(l, r / 2);
    if (r % 2) {
        return (((ans * ans) % mod) * l) % mod;
    }
    else return (ans * ans) % mod;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        cout << check(a, b) << '\n';
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