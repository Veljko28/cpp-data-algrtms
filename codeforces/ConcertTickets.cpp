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
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    multiset<int> a;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        a.insert(j);
    }
    for (int i = 0,j; i < m; i++) {
        cin >> j;
        auto f = a.upper_bound(j);
        if (f == a.begin()) cout << "-1\n";
        else {
            f--;
            cout << *f << '\n';
            a.erase(f);
        }
    }
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}