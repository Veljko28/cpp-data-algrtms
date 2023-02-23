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

char other(char f, char s) {
    if (f == 'R' and s == 'R') return 'B';
    if (f == 'G' and s == 'G') return 'R';
    if (f == 'B' and s == 'B') return 'G';

    if (f == 'B' and s == 'R') return 'G';
    if (f == 'B' and s == 'G') return 'R';
    if (f == 'R' and s == 'G') return 'B';

    return other(s, f);
}

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for (int i = 0; i < n-1; i++) {
        int j = i + 1;
        while (j < n and s[i] == s[j]) j++;
        if (j - i > 1) {
            int len = j - i;
            int cnt = len / 2;
            int k;
            ans += cnt;
            if (len % 2) k = i + 1;
            else k = i;

            while (k < j) {
                s[k] = other(k - 1 < 0 ? s[k] : s[k - 1], k + 1 > n ? s[k] : s[k + 1]);
                k += 2;
            }
        }
    }
    cout << ans << '\n' << s << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
