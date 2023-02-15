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
    string s;
    cin >> n >> s;
    set<char> st;
    vector<int> pref(n + 1), suf(n + 1);
    pref[0] = 0;
    for (int i = 1; i <= n; i++) {
        st.insert(s[i - 1]);
        pref[i] = (int)st.size();
    }
    st.clear();
    suf[n] = 0;
    for (int i = n - 1; i >= 0; i--) {
        st.insert(s[i]);
        suf[n-i] = (int)st.size();
    }
    int ans = 0;
    for (int i = 0; i <= n; i++) {
        ans = max(ans, pref[i] + suf[n - i]);
    }
    cout << ans << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
