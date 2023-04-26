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
    int k;
    while (cin >> k) {
        vector<pair<int,int>> ans;
        for (int i = k + 1; i <= 2 * k; i++) {
            if ((k * i) % (i - k) == 0) {
                ans.push_back({(k*i)/(i-k), i});
            }
        }

        cout << ans.size() << '\n';
        for (pair<int,int> p : ans) {
            cout << "1/" << k <<  " = 1/" << p.first << " + 1/" << p.second << '\n';
        }
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
