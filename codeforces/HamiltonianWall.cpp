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
vector<string> a;


void solve() {
    cin >> n;
    a = vector<string>(2);
    for (string& s : a) cin >> s;
    int b = -1;
    for (int i = 0; i < n; i++) {
        if (a[0][i] != a[1][i]) {
            b = i;
        }
    }
    if (b == -1) {
        cout << "YES\n";
        return;
    }
    bool ok = 1;
    int at = a[0][b] == 'B' ? 0 : 1;
    for (int i = b+1; i < n; i++) {
        if (a[at][i] == 'W') {
            ok = 0;
            break;
        }
        if (a[!at][i] == 'B') at ^= 1;
    }
    at = a[0][b] == 'B' ? 0 : 1;
    for (int i = b - 1; i >= 0; i--) {
        if (a[at][i] == 'W') {
            ok = 0;
            break;
        }
        if (a[!at][i] == 'B') at ^= 1;
    }

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
