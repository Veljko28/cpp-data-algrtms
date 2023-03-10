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
    if (k > (n - 1) / 2 or (k and n < 3)) {
        cout << "-1\n";
        return;
    }
    bool ok = 1;
    int i = 1, j = n;
    for (i; i <= j and k;) {
        if (ok) {
            cout << i++ << ' ';
        }
        else {
            cout << j-- << ' ';
            k--;
        }
        ok ^= 1;
    }
    for (i; i <= j; i++) cout << i << ' ';
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
