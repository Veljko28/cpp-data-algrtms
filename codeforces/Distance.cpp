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
    int x, y;
    cin >> x >> y;
    int a = x + y;
    if (a % 2) {
        cout << "-1 -1\n";
        return;
    }
    a /= 2;
    for (int i = 0; i <= 50; i++) {
        for (int j = 0; j <= 50; j++) {
            int b = abs(x - i) + abs(y - j);
            if ((i + j) == b) {
                cout << i << ' ' << j << '\n';
                return;
            }
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
