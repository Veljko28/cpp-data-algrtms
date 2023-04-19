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
    string s;
    cin >> s;
    int n = s.length();
    vector<string> suff(n+1);
    for (int i = 1; i <= n; i++) {
        suff[n - i] = suff[n - i + 1] + s[n-i];
    }
    sort(all(suff));
    vector<int> lcp(n);
    lcp[0] = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 0; j < min(suff[i].length(), suff[i + 1].length() ); j++) {
            if (suff[i][j] == suff[i + 1][j]) {
                lcp[i]++;
            }
        }
    }

    cout << accumulate(all(lcp),0) << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
