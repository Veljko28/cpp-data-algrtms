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
    vector<pair<string, pair<int, int>>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    int q;
    cin >> q;
    while (q--) {
        int v;
        cin >> v;
        int cnt = 0, idx = 0;
        for (int i = 0; i < n; i++) {
            if (a[i].second.first <= v and a[i].second.second >= v) {
                cnt++;
                idx = i;
            }
        }
        if (cnt == 1) {
            cout << a[idx].first << '\n';
        }
        else cout << "UNDETERMINED\n";
    }
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        if (t) cout << "\n";
    }
}
