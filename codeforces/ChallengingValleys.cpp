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
    vector<int> a(n);
    for (int& i : a) cin >> i;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int j = i;
        while (j < n and a[i] == a[j]) j++;
        j--;
        bool ok = 1;
        if (i - 1 >= 0 and a[i - 1] < a[i]) ok = 0;
        if (j + 1 < n and a[j + 1] < a[j]) ok = 0;

        if (ok) {
            ans++;
        }
        i = j;
    }
    if (ans == 1) cout << "YES\n";
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