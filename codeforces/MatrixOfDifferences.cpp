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
#include <unordered_set>
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
    int l = 1, r = n * n;
    int k = 0;
    bool ok = 0, rev = 0;
    vector<vector<int>> a;
    vector<int> b;
    while (l <= r) {
        if (ok) {
            b.push_back(l++);
        }
        else b.push_back(r--);
        k++;
        ok ^= 1;
        if (k % n == 0) {
            if (rev) reverse(all(b));
            a.push_back(b);
            b.clear();
            rev ^= 1;
        }
    }
    for (vector<int> v : a) {
        for (int i : v) cout << i << ' ';
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