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


#define pii pair<int,int>

void solve() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<pii> mines;
    ll ans = 0;
    int n = (int)s.length();
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n and s[j] == '1') j++;
        if (j != i) mines.push_back({ i, j - 1 });
        i = j;
    }
    if (mines.size() == 1) {
        ans = a;
    }
    else {
        for (int i = 0; i < mines.size(); i++) {
            if (i == mines.size() - 1) {
                ans += a;
                continue;
            }
            pair<int, int> fir = mines[i], sec = mines[i + 1];
            int c = sec.first - fir.second - 1;
            if (c * b + a <= 2 * a) {
                ans += (c * b);
            }
            else ans += a;
        }
    }
    cout << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
