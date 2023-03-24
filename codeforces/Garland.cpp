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
    map<int, int> m;
    string s;
    cin >> s;
    for (char c : s) {
        m[c - '0']++;
    }
    switch (m.size())
    {
    case 1:
        cout << "-1\n";
        break;
    case 2:
        if (m.begin()->second == 1 or m.begin()->second == 3) {
            cout << "6\n";
        }
        else cout << "4\n";
        break;
    case 3: case 4: cout << "4\n"; break;
    default:
        break;
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
