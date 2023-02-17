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

bool isValid(vector<int> b) {
    for (int i = 0; i < b.size(); i++) {
        int prev = (i - 1 < 0 ? b[b.size() - 1] : b[i - 1]);
        int next = (i + 1 == b.size() ? b[0] : b[i + 1]);
        if (b[i] == prev or b[i] == next) return 0;
        if ((b[i] > prev and b[i] < next) or (b[i] < prev and b[i] > next)) {
            return 0;
        }
    }
    return 1;
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    if (n % 2) {
        cout << "NO\n";
        return;
    }
    sort(all(a));
    vector<int> b(n);
    bool ok = 1;
    int p = 0,h = n / 2;
    for (int i = 0; i < n; i++) {
        if (ok) {
            b[i] = a[p++];
        }
        else b[i] = a[h++];
        ok ^= 1;
    }
    if (isValid(b)) {
        cout << "YES\n";
        for (int i : b) cout << i << ' ';
        cout << '\n';
    }
    else cout << "NO\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
