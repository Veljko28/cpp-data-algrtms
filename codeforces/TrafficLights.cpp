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
    int x, n;
    cin >> x >> n;
    vector<int> a(n);
    multiset<int> s;
    for (int& i : a) {
        cin >> i;
        s.insert(i);
    }
    vector<int> b = a;
    sort(all(b));
    int mx = b[0];
    for (int i = 1; i < n; i++) {
        mx = max(mx, b[i] - b[i - 1]);
    }
    mx = max(mx, x - b[n - 1]);
    b.clear();
    b.push_back(mx);
    for (int i = n - 1; i > 0; i--) {
        auto f = s.find(a[i]);
        int p,nx;
        if (f == s.begin()) p = 0;
        else p = *prev(f);
 
        if (next(f) == s.end()) nx = x;
        else nx = *next(f);
        
        mx = max(mx, nx - p);
        s.erase(f);
        b.push_back(mx);
    }
 
    for (int i = n - 1; i >= 0; i--) {
        cout << b[i] << ' ';
    }
    cout << '\n';
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}