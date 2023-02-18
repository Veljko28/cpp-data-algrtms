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

int n;
vector<int> ans;


void check(int a) {
    if (a < 0) return;
    int next = sqrt(2 * a);
    next *= next;
    int b = next - a;
    check(b - 1);
    while (b <= a) {
        ans[b] = a;
        ans[a] = b;
        a--, b++;
    }
}

void solve() {
    cin >> n;
    ans = vector<int>(n);
    check(n-1);
    for (int i = 0; i < n; i++)  cout << ans[i] << ' ';
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
