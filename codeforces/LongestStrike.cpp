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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    map<int, int> m;
    vector<int> overk;
    for (int& i : a) {
        cin >> i;
        m[i]++;
        if (m[i] == k) overk.push_back(i);
    }
    int l = INT_MIN, r = INT_MAX;
    int max_length = 0;
    if (overk.empty()) {
        cout << "-1\n";
        return;
    }
    sort(all(overk));
    for (int i = 0; i < overk.size(); i++) {
        int j = i + 1;
        while (j < overk.size() and overk[j] == overk[i] + (j - i)) {
            j++;
        }
        if ((j-i) > max_length) {
            max_length = (j - i);
            j--;
            l = overk[i], r = overk[j];
            i = j-1;
        }
    }
    cout << l << ' ' << r << '\n';
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}