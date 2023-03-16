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
    set<int> s;
    vector<int> a;
    map<int, int> m;
    bool ok = 1;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        s.insert(j);
        m[j]++;
        if (m[j] > 2) {
            ok = 0;
        }
        else if (m[j] == 2) {
            a.push_back(j);
        }
    }
    if (!ok) {
        cout << "NO\n";
        return;
    }
    if (a.empty()) {
        a.push_back(*s.begin());
        s.erase(a[0]);
    }
    cout << "YES\n" << s.size() << '\n';
    for (int i : s) cout << i << ' ';
    cout << "\n" << a.size() << '\n';
    sort(all(a), greater<int>());
    for (int i : a) cout << i << " ";
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
