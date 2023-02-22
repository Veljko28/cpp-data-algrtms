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
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    if (s[0] != '9') {
        for (char c : s) {
            ans += (9 - (c - 48)) + 48;
        }
        cout << ans << '\n';
    }
    else {
        vector<int> b(n);
        b[n - 2] = 1;
        b[0] = 11;
        b[n - 1] = 1;
        for (int i = n - 1; i > 0; i--) {
            if (b[i] >= (s[i] - 48)) b[i] -= (s[i]-48);
            else {
                b[i] = b[i] - (s[i] - 48) + 10;
                b[i - 1]--;
            }
        }
        b[0] -= 9;
        for (int i = 0; i < n; i++) cout << b[i];
        cout << '\n';
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
