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
    vector<pair<int, int>> a(n);
    for (int i = 0, j; i < n; i++) {
        cin >> j;
        a[i] = { j,i + 1 };
    }
    sort(all(a));
    vector<bool> ans(n+1,1);
    ans[0] = 0;
    vector<int> b = { a[0].second };
    int size = n;
    ll curr = a[0].first;
    for (int i = 1; i < n; i++) {
        if (curr < a[i].first) {
            size -= b.size();
            while (b.size()) {
                ans[b.back()] = 0;
                b.pop_back();
            }
        }
        curr += a[i].first;
        b.push_back(a[i].second);
    }
    cout << size << '\n';
    for (int i = 1; i <= n; i++) {
        if (ans[i]) cout << i << ' ';
    }
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