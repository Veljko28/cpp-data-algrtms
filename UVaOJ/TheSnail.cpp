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
    double h, u, d, f;
    cin >> h >> u >> d >> f;
    while (h or u or d or f) {
        double curr = 0;
        int day = 1;
        int ok = -1;
        f = (u / 100.) * f;
        while (ok == -1) {
            curr += u;
            if (curr > h) {
                ok = 1;
                break;
            }
            u -= f;
            u = max(0., u);
            curr -= d;
            if (curr < 0) {
                ok = 0;
                break;
            }
            day++;
        }

        if (ok == 1) cout << "success on day ";
        else cout << "failure on day ";
        cout << day << '\n';
        cin >> h >> u >> d >> f;
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
