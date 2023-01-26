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
    vector<int> a, b;
    for (int i = 0,j; i < n; i++) {
        cin >> j;
        if (j % 2) a.push_back(i+1);
        else b.push_back(i+1);
    }
    if (a.size() and b.size() > 1) {
        cout << "YES\n" << b[0] << ' ' << b[1] << ' ' << a[0] << '\n';
    }
    else if (a.size() > 2) cout << "YES\n"  << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';
    else cout << "NO\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}