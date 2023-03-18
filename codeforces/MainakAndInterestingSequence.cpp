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
    ll n, m;
    cin >> n >> m;
    if (n > m) {
        cout << "No\n";
        return;
    }

    if (m % n == 0) {
        cout << "Yes\n";
        for (int i = 0; i < n; i++) cout << m / n << ' ';
    }
    else if (n%2) {
        cout << "Yes\n";
        cout << m - (n - 1) << ' ';
        for (int i = 0; i < n - 1; i++) cout << "1 ";
    }
    else if (n % 2 == 0 and m % 2 == 0) {
        cout << "Yes\n";
        cout << (m - (n - 2)) / 2 << ' ' << (m - (n - 2)) / 2 << ' ';
        for (int i = 0; i < n - 2; i++) cout << "1 ";
    }
    else cout << "No\n";
    cout << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
