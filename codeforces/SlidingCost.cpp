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
    set<pair<int, int>> l, r;
    ll s1 = 0, s2 = 0;
    for (int i = 0; i < (k + 1) / 2; i++) {
        l.insert(t[i]);
        s1 += t[i].first;
    }
    for (int i = (k + 1) / 2;i<k; i++) {
        r.insert(t[i]);
        s2 += t[i].first;
    }
    int m = l.rbegin()->first;
    int sl = (int)l.size(), sr = (int)r.size();
    cout << (m * sl - s1) + (s2 - m * sr) << ' ';
    for (int i = k; i < n; i++) {
        if (l.find({ a[i - k],i - k }) != l.end()) l.erase({ a[i - k],i - k }),s1-=a[i-k];
        else r.erase({ a[i - k],i - k }), s2-=a[i-k];
 
        if (l.size()) {
            if (a[i] > (l.rbegin())->first) r.insert({ a[i],i }), s2 += a[i];
            else l.insert({ a[i],i }), s1+=a[i];
        }
        else if (r.size()) {
            if (a[i] > (r.rbegin())->first) r.insert({ a[i],i }),s2+=a[i];
            else l.insert({ a[i],i }),s1+=a[i];
        }
        else l.insert({ a[i],i }),s1+=a[i];
 
 
        while (l.size() > sl) {
            pair<int, int> p = *(l.rbegin());
            r.insert(p); s2 += p.first;
            l.erase(p); s1 -= p.first;
        }
 
        while (l.size() < sl) {
            pair<int, int> p = *(r.begin());
            r.erase(p); s2 -= p.first;
            l.insert(p); s1 += p.first;
        }
        m = l.rbegin()->first;
        cout << (m * sl - s1) + (s2 - m * sr) << ' ';
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