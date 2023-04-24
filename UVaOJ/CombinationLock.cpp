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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while (a or b or c or d) {
        cout << ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9 + 1080 << '\n';
        cin >> a >> b >> c >> d;
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
