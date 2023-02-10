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
    if (n % 2 == 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int i = 1,j=0; i <= n / 2; i++,j+=2) {
        cout << i << ' ' << 2 * n - 1 - j << '\n';
    }
    for (int i = n / 2+1, j = 0; i <= n; i++, j += 2) {
        cout << i << ' ' << 2 * n - j << '\n';
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
