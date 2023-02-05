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
    string s;
    cin >> s;
    map<pair<int, int>, int> m;
    int length = INT_MAX;
    pair<int, int> ans = { INT_MAX,INT_MAX };
    pair<int, int> curr = { 0,0 };
    for (int i = 0; i <= n; i++) {
        if (m.find(curr) != m.end()) {
            if (length > (i + 1) - m[curr]) {
                length = (i + 1) - m[curr];
                ans = { m[curr], i };
            }
        }
        m[curr] = i + 1;
        if (i < n) {
            switch (s[i])
            {
            case 'U': curr.second++; break;
            case 'D': curr.second--; break;
            case 'L': curr.first--; break;
            case 'R': curr.first++; break;
            default:
                break;
            }
        }
    }
    if (ans.first == INT_MAX) cout << "-1\n";
    else cout << ans.first << ' ' << ans.second << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
