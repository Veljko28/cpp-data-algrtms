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
    map<int, bool> m;
    for (int& i : a) {
        cin >> i;
        m[i] = 1;
    }
    vector<int> temp = a;
    vector<int> ans;
    while (true) {
        bool ok = 1;
        vector<int> b;
        for (int i = 0; i < temp.size(); i++) {
            for (int j = 0; j < n; j++) {
                if (temp[i] == a[j]) continue;
            
                if (!m[abs(a[j] - temp[i])]) {
                    m[abs(a[j] - temp[i])] = 1;
                    b.push_back(abs(a[j] - temp[i]));
                    ok = 0;
                }
            }


        }
        ans.insert(ans.begin(), temp.begin(), temp.end());
        if (ok or ans.size() > 300) break;
        temp = b;
    }

    if (ans.size() > 300) cout << "NO\n";
    else {
        cout << "YES\n";
        cout << ans.size() << '\n';
        for (int i : ans) {
            cout << i << " ";
        }
        cout << '\n';
    }
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
