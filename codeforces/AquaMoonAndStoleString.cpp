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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> b(m, vector<int>(26));
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            char c = s[j];
            b[j][c - 'a']++;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> s;
        for (int j = 0; j < m; j++) {
            b[j][s[j] - 'a']--;
        }
    }
    for (int i = 0; i < m; i++) {
        cout << (char)('a' + (find(all(b[i]), 1) - b[i].begin()));
    }
    cout << '\n';
    cout << flush;
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
