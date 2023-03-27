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
    vector<int> p(5e4 + 5,-1);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        for (int j = 0,k; j < a; j++) {
            cin >> k;
            p[k] = i;
        }
    }

    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        auto f = find(all(p), i);
        if (f != p.end()) {
            ans[i] = f - p.begin();
            p[f - p.begin()] = INT_MAX;
        }
        else {
            cout << "-1\n";
            return;
        }
    }

    for (int i : ans) cout << i << ' ';
    cout << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
