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
    vector<ll> a(n);
    ll sum = 0;
    for (ll& i : a) {
        cin >> i;
        sum += i;
    }
    multiset<ll> b = { sum };
    multiset<ll> c(all(a));
    while (!b.empty()) {
        ll last = *prev(b.end());
        if (last < *prev(c.end())) break;
        b.erase(prev(b.end()));
        auto f = c.find(last);
        if (f != c.end()) {
            c.erase(f);
        }
        else {
            b.insert(last/ 2);
            b.insert((last + 1)/ 2);
        }
    }
    if (c.empty()) cout << "YES\n";
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
