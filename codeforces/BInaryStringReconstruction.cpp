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
    int a, b, c;
    cin >> a >> b >> c;
    string ans;
    bool ok = 1;
    if (b != 0) {
        for (int i = 0; i < b + 1; i++) {
            if (ok) ans += '1';
            else ans += '0';
            ok ^= 1;
        }
        if (a) for (int i = 0; i < a; i++) ans.insert(ans.begin() + 1, '0');
        if (c) for (int i = 0; i < c; i++) ans.insert(ans.begin(), '1');
    }
    else {
        if (a) ans = string(a + 1, '0');
        else ans = string(c + 1, '1');
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
