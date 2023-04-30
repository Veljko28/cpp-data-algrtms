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
    string s;
    cin >> s;
    map<char, vector<int>> m;
    for (int i = 0; i < s.length(); i++) {
        m[s[i]].push_back(i);
    }
    int q;
    cin >> q;
    while (q--) {
        string a;
        cin >> a;
        map<char, int> idx;
        int f;
        bool ok = 1;
        int curr_idx = -1;
        for (int i = 0; i < a.length(); i++) {
            while (idx[a[i]] < m[a[i]].size() and m[a[i]][idx[a[i]]] <= curr_idx) idx[a[i]]++;
            if (idx[a[i]] < m[a[i]].size()) {
                if (i == 0) f = m[a[i]][0];
                curr_idx = m[a[i]][idx[a[i]]];
                idx[a[i]]++;
            }
            else {
                ok = 0;
                break;
            }
        }

        if (ok) {
            cout << "Matched " << f << ' ' << curr_idx << '\n';
        }
        else cout << "Not matched\n";
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
