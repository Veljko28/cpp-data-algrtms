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
    vector<int> a(n), b(n);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;
    pair<int, int> ans = { 1,1 };
    int l = 1;
    for (int i = 0; i < n;) {
        int st = i;
        int j = i + 1;
        bool ok = 0;
        while (j < n and b[j] >= b[i]) {
            if (a[i] != b[i] or a[j] != b[j]) ok = 1;
            i++, j++;
        }
        if (ok and i - st >= l) {
            ans = { st + 1, i + 1 };
            l = i - st;
        }
        i = j;
    }
    cout << ans.first << ' ' << ans.second << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
