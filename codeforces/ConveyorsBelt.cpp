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
    ll n, a, b, x, y;
    cin >> n >> a >> b >> x >> y;
    ll c = min(a, min(b, min(n - a + 1, n - b + 1))), d = min(x, min(y, min(n - x + 1, n - y + 1)));
    cout << abs(c - d) << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
