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
#include <unordered_set>
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

void solve() {
    int n;
    cin >> n;
    ll a = 1, b = 1;
    for (int i = 1;i < n; i++) {
        a *= i;
        b *= 2;
        a %= mod, b %= mod;
    }
    a *= n;
    a %= mod;
    a -= b;
    a %= mod;
    if (a < 0) cout << (a + mod) % mod;
    else cout << a % mod;
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}