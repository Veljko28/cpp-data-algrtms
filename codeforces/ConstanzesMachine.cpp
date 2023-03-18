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


vector<ll> dp;
string s;
int n;

const int mod = 1e9 + 7;

void check(int i) {
    if (i > n) return;
    dp[i] = dp[i - 1];
    if ((s[i] == 'n' and s[i - 1] == 'n') or (s[i] == 'u' and s[i - 1] == 'u')) dp[i] += dp[i - 2];
    dp[i] %= mod;
    check(i + 1);
}

void solve() {
    cin >> s;
    n = (int)s.length();
    s = "0" + s;
    if (s.find('m') != string::npos or s.find('w') != string::npos) {
        cout << "0\n";
        return;
    }
    dp = vector<ll>(n + 1, -1);
    dp[0] = dp[1] = 1;
    check(2);
    cout << dp[n]<< '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
