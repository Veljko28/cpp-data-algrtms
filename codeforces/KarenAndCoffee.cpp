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

const int MAXN = 2e5 + 5;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(MAXN+5);
    int l, r;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        a[l]++;
        a[r + 1]--;
    }
    int c = 0;
    for (int i = 0; i < a.size(); i++) {
        c += a[i];
        a[i] = (c >= k);
    }
    vector<int> pref(MAXN); pref[0] = 0;
    for (int i = 1; i < pref.size(); i++) {
        pref[i] = a[i - 1] + pref[i - 1];
    }
    while (q--) {
        cin >> l >> r;
        cout << pref[r+1] - pref[l] << '\n';
    }
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
