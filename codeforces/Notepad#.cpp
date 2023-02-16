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
    string s;
    cin >> s;
    if (s.length() < n) {
        cout << "YES\n";
        return;
    }
    vector<string> st;
    st.push_back(s.substr(0, 2));
    for (int i = 1; i < n - 1; i++) {
        string a; a += s[i]; a += s[i + 1];
        auto f = find(all(st), a);
        if (f != st.end() and i-1 != f-st.begin()) {
            cout << "YES\n";
            return;
        }
        st.push_back(a);
    }
    cout << "NO\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
