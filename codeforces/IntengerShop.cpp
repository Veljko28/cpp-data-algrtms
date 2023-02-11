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
    ll l = INT_MAX, r = INT_MIN;
    ll lprice = INT_MAX, rprice = INT_MAX;
    ll s, e, cost;
    ll length = 0, lenCost = INT_MAX;
    for (int i = 0; i < n; i++) {
        cin >> s >> e >> cost;
        
        if (s < l) {
            l = s;
            lprice = INT_MAX;
        }
        if (s == l) lprice = min(lprice, cost);

        if (e > r) {
            r = e;
            rprice = INT_MAX;
        }
        if (e == r) rprice = min(rprice, cost);

        if (e - s + 1 > length) length = e - s + 1, lenCost = INT_MAX;
        if (e - s + 1 == length) lenCost = min(cost, lenCost);


        if (length == r - l + 1) cout << min(lenCost, lprice + rprice) << '\n';
        else cout << lprice+rprice << '\n';

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
