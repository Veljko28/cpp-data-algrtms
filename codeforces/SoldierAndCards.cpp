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
#include <unordered_set>
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
    int k;
    cin >> k;
    deque<int> q1;
    for (int i = 0,j; i < k; i++) {
        cin >> j;
        q1.push_front(j);
    }
    cin >> k;
    deque<int> q2;
    for (int i = 0,j; i < k; i++) {
        cin >> j;
        q2.push_front(j);
    }
    set<pair<deque<int>, deque<int>>> st;
    int ans = 0;
    while (!q1.empty() and !q2.empty()) {
        int a = q1.back(), b = q2.back();
        q1.pop_back(); q2.pop_back();
        if (st.find({ q1,q2 }) != st.end()) {
            cout << "-1\n";
            return;
        }
        st.insert({ q1,q2 });
        if (a > b) {
            q1.push_front(b);
            q1.push_front(a);
        }
        else {
            q2.push_front(a);
            q2.push_front(b);
        }
        ans++;
    }
    cout << ans << ' ' << (q1.size() ? 1 : 2) << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}