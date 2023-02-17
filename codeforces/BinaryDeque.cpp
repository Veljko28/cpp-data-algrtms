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
    int n, s;
    cin >> n >> s;
    vector<int> a(n), pos;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]) pos.push_back(i);
    }
    if (s > (int)pos.size()) {
        cout << "-1\n";
        return;
    }
    else if (s == pos.size()){
        cout << "0\n";
        return;
    }
    int ans = n - (pos[pos.size() - (pos.size()-s)]);
    for (int i = 0; i < pos.size(); i++) {
        int b = pos[i]+1;
        if (pos.size() - (i + 1) > s) {
            int idx = pos.size() - (i + 1) - s;
            b += n - pos[pos.size() - idx];
        }

        ans = min(ans, b);
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
