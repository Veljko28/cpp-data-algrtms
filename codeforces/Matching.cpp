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
    if (s[0] == '0') {
        cout << "0\n";
        return;
    }
    if (s.length() == 1) {
        if (s[0] == '?') cout << "9\n";
        else cout << "1\n";
        return;
    }
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '?') cnt++;
    }
    if (!cnt) {
        cout << "1\n";
        return;
    }
    if (s[0] == '?') {
        cout << pow(10, cnt) - pow(10,cnt-1) << '\n';
    }
    else cout << pow(10,cnt) << "\n";
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
