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
 
 
const int MAXN = (int)2e5+5; 
const int LOGN = 20;
vector<vector<int>> a(LOGN, vector<int>(MAXN));
 
int check(int l, int r) {
    int len = r - l + 1;
    int k = log2(len);
    return min(a[k][l], a[k][r - (1 << k) + 1]);
}
 
 
void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i < n; i++) {
        cin >> a[0][i];
    }
    for (int j = 1;j<LOGN;j++){
        for (int i =0;i<=n-(1<<j);i++){
            a[j][i] = min(a[j-1][i], a[j-1][i+(1<<(j-1))]);
        }
    }
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << check(l-1, r-1) << '\n';
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