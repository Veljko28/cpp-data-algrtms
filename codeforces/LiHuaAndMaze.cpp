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

int n, m;

int need(int a, int b) {
    if ((a == 1 and b == m) or (a == 1 and b == 1) or (a == n and b == 1) or (a == n and b == m)) {
        return 2;
    }
    else if (a == 1 or a == n or b == 1 or b == m) return 3;
    else return 4;
}



void solve() {
    cin >> n >> m;
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    cout << min(need(x, y), need(a, b)) << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
