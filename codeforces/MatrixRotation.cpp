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

vector<vector<int>> a(2, vector<int>(2));

bool check() {
    return a[0][0] < a[1][0] and a[0][1] < a[1][1] and a[0][0] < a[0][1] and a[1][0] < a[1][1];
}

void shift() {
    int t = a[0][0];
    a[0][0] = a[1][0];
    a[1][0] = a[1][1];
    a[1][1] = a[0][1];
    a[0][1] = t;
}

void solve() {
    for (vector<int>& v : a) {
        for (int& i : v) cin >> i;
    }
    for (int i = 0; i < 4; i++) {
        if (check()) {
            cout << "YES\n";
            return;
        }
        shift();
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