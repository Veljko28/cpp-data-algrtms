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
    
    map<int, int> dp;
    int ans = 0, x = 0;
    for (int i = 0; i < n; i++) {
        dp[a[i]] = dp[a[i] - 1] + 1;
        if (ans < dp[a[i]]) {
            ans = dp[a[i]];
            x = a[i];
        }
    }

    vector<int> nums;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == x) nums.push_back(i+1), x--;
    }
    cout << nums.size() << '\n';
    for (int i = nums.size() - 1; i >= 0; i--) cout << nums[i] << ' ';
    cout << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
