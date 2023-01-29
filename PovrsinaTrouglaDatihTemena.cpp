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


double side(double x1, double y1, double x2, double y2) {
    double first = (x2 - x1), second = (y2 - y1);
    return sqrt(first * first + second * second);
}

void solve() {
    int a1, a2, b1, b2, c1, c2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
    double one = side(a1, a2, b1, b2), two = side(a1, a2, c1, c2), three = side(b1, b2, c1, c2);
    double s = (one + two + three) / 2.0;
    cout << fixed << showpoint << setprecision(5) << sqrt(s * (s - one) * (s - two) * (s - three)) << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}