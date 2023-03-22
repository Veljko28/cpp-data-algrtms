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
    int n = (int)s.length();
    vector<int> a(n + 1);
    vector<bool> b(n + 1);
    int k = 0;
    for (int i = 1; i < n; i++) {
        while (k and s[i] != s[k]) k = a[k - 1];
        if (s[i] == s[k]) k++;
        if (i != n - 1) b[k] = 1;
        a[i] = k;
    }
    b[0] = 1;
    k = a[n - 1];
    while (k and !b[k]) k = a[k - 1];
    if (k) cout << s.substr(0,k);
    else cout << "Just a legend";
    cout << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
