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
    vector<int> a(n);
    for (int& i : a) cin >> i;
    vector<pair<int, int>> t(k);
    for (int i = 0; i < k; i++) {
        t[i] = { a[i],i };
    }
    sort(all(t));
    set<pair<int, int>> l(t.begin(),t.begin()+(k+1)/2), r(t.begin()+(k+1)/2,t.end());
    int s = (int)l.size();
    cout << (l.rbegin())->first << ' ';
    for (int i = k; i < n; i++) {
        if (l.find({ a[i - k],i - k }) != l.end()) l.erase({ a[i - k],i - k });
        else r.erase({ a[i - k],i - k });

        if (l.size()) {
            if (a[i] > (l.rbegin())->first) r.insert({ a[i],i });
            else l.insert({ a[i],i });
        }
        else if (r.size()) {
            if (a[i] > (r.rbegin())->first) r.insert({ a[i],i });
            else l.insert({ a[i],i });
        }
        else l.insert({ a[i],i });
        

        while (l.size() > s) {
            pair<int, int> p = *(l.rbegin());
            r.insert(p);
            l.erase(p);
        }

        while (l.size() < s) {
            pair<int, int> p = *(r.begin());
            r.erase(p);
            l.insert(p);
        }
        cout << (l.rbegin())->first << ' ';
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