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
    int n, t;
    cin >> n >> t;
    int mx = INT_MAX, idx;
    for (int i = 1;i<=n;i++){
        int s, d;
        cin >> s >> d;
        int b, c;
        if (s < t) {
            b = t - s;
            c = b / d + (b%d ? 1 : 0);
            c = s + (c * d);
        }
        else c = s;
        if (c < mx) {
            mx = c;
            idx = i;
        }
    }
    cout << idx << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}