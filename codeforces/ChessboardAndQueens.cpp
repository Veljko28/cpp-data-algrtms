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
 
int ans = 0;
vector<vector<char>> a(8, vector<char>(8));
vector<bool> ld(16,0), rd(16,0), cl(16,0);
 
void check(int curr) {
    if (curr == 8) {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++) {
        if (a[i][curr] == '.' and !ld[i - curr + 7] and !rd[i + curr] and !cl[i]) {
            ld[i - curr + 7] = rd[i + curr] = cl[i] = 1;
            check(curr + 1);
            ld[i - curr + 7] = rd[i + curr] = cl[i] = 0;
        }
    }
}
 
void solve() {
    for (vector<char>& v : a) {
        for (char& c : v) {
            cin >> c;
        }
    }
    check(0);
    cout << ans << '\n';
}
 
int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}