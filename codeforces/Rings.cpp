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
    string s;
    cin >> n >> s;
    if (s == string(n, '1')) {
        cout << "1 " << n - 1 << " 2 " << n << "\n";
        return;
    }
    for (int i = 0; i < n / 2; i++) {
        if (s[i] == '0') {
            cout << i + 2 << " " << n << " " << i + 1 << ' ' << n << '\n';
            return;
        }
    }
    for (int i = n / 2; i < n; i++) {
        if (s[i] == '0') {
            cout << 1 << " " << i + 1 << " " << 1 << ' ' << i << '\n';
            return;
        }
    }
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
