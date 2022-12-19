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

vector<int> con(int f, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        if (i < f - 1) res.push_back(i + 2);
        else res.push_back(1);
    }
    return res;
}

void solve() {
    int k, n;
    cin >> k >> n;
    int f = 1;
    for (int i = 0; i < k; i++) {
        vector<int> d = con(i, k - 1);
        if (accumulate(all(d), 0) < n) {
            f = i;
        }
    }
    vector<int> d = con(f, k - 1);
    vector<int> ans = { 1 };
    for (int i : d) {
        ans.push_back(ans.back() + i);
    }
    for (int i : ans) {
        cout << i << ' ';
    }
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