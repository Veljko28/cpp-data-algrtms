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

int n, m;
bool ok = 0;

void check(int i) {
    if (ok) return;
    if (i == m) {
        ok = 1;
        return;
    }

    if (i % 3 == 0) {
        check(i / 3);
        check((i / 3) * 2);
    }
}


void solve() {
    ok = 0;
    cin >> n >> m;
    if (m > n) {
        cout << "NO\n";
        return;
    }
    check(n);
    if (ok) cout << "YES\n";
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
