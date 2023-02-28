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
    string a, b;
    cin >> a >> b;
    if (a == b) {
        cout << "YES\n";
        cout << a << '\n';
        return;
    }
    if (a[0] == b[0]) {
        cout << "YES\n";
        cout << a[0] << "*\n";
        return;
    }
    else if (a[a.length() - 1] == b[b.length() - 1]) {
        cout << "YES\n";
        cout << "*" << a[a.length() - 1] << "\n";
        return;
    }
    else {
        for (int i = 0; i < a.length()-1; i++) {
            string c = string(1, a[i]);
            c += a[i + 1];
            size_t f = b.find(c);
            if (f != string::npos) {
                cout << "YES\n" << "*" << c << "*\n";
                return;
            }
        }
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
