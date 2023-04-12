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
    vector<int> a(n);
    for (int& i : a) cin >> i;
    sort(all(a));
    if (a[0] != 1) {
        cout << "NO\n";
        return;
    }
    vector<bool> visited(5001);
    visited[1] = 1;
    for (int i = 1; i < n; i++) {
        if (!visited[a[i]]) {
            cout << "NO\n";
            return;
        }

        for (int j = 5000; j >= a[i]; j--) {
            visited[j] = visited[j] || visited[j - a[i]];
        }
    }
    cout << "YES\n";
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
