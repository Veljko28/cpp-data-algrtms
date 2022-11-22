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
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;

void solve() {
    ll n, s;
    cin >> n >> s;
    vector<bool> a(101);
    ll b = 0;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        a[j] = 1;
        b += j;
    }
    for (int i = n; i <= 100; i++) {
        if (i * (i + 1) / 2 == (b + s)) {
            ll c = 0;
            for (int j = 1; j <= i; j++) {
                c += (a[j] == 0 ? j : 0);
            }
            if (c == s) cout << "YES\n";
            else cout << "NO\n";
            return;
        }
    }
    cout << "NO\n";

}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}