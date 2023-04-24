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
    bool dub = 1, sig = 1;
    while (getline(cin, s)) {
        int n = s.length();
        string output;
        for (int i = 0; i < n; i++) {
            if (s[i] == '\'') {
                if (sig) output += '`';
                else output += '\'';
                sig ^= 1;
            }
            else if (s[i] == '\"') {
                if (dub) output += "``";
                else output += "''";
                dub ^= 1;
            }
            else output += s[i];
        }
        cout << output << '\n';
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
