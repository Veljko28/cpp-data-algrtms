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
    int m = 0, p = 0;
    for (int& i : a) {
        cin >> i;
        m += (i == -1);
        p += (i == 1);
    }
    bool b = 0, c = 0;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] == -1 and a[i] == -1) b = 1;
        if (a[i - 1] == -1 or a[i] == -1) c = 1;
    }
    if (b) p += 2, m -= 2;
    else if (!c) p -= 2, m += 2;
    cout << p - m << '\n';

}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}