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
    int mx = 0;
    map<int, bool> m;
    vector<int> mn;
    for (int i = 0, j; i < n; i++) {
        cin >> j;
        if (m[abs(j)]) {
            mn.push_back(1);
            mn.push_back(0);
        }
        else m[abs(j)] = 1;

        if (j > 0) mx++;
    }

    for (int i = 1; i <= mx; i++) cout << i << ' ';
    for (int i = 0; i < n - mx; i++) cout << mx - 1 - i << ' ';
    cout << '\n';
    int i = 1;
    while (mn.size() < n) {
        mn.push_back(i++);
    }
    for (int i : mn) cout << i << ' ';
    cout << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
