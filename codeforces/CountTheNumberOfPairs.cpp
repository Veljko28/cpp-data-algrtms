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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(26, vector<int>(2));
    int ans = 0;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (islower(c)) {
            if (a[c - 'a'][1]) {
                a[c - 'a'][1]--;
                ans++;
            }
            else a[c - 'a'][0]++;
        }
        else {
            if (a[c - 'A'][0]) {
                a[c - 'A'][0]--;
                ans++;
            }
            else a[c - 'A'][1]++;
        }
    }
    int i = 0;
    while (i < 26 and k) {
        int left = a[i][0] + a[i][1];
        int get = left / 2;
        ans += min(get,k);
        k -= min(get, k);
        i++;
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
