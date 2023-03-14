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
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    string c = b.substr(1);
    for (int i = n - 1, j = m - 2; j >= 0; i--, j--) {
        if (a[i] != c[j]) {
            cout << "NO\n";
            return;
        }
    }
    for (int i = 0; i < n-(m-1); i++) {
        if (a[i] == b[0]) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
