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
    vector<bool> ans(10);
    for (char c : s) {
        int i;
        if (c == 'L') {
            i = 0;
            while (ans[i]) i++;
            ans[i] = 1;
        }
        else if (c == 'R') {
            i = 9;
            while (ans[i]) i--;
            ans[i] = 1;
        }
        else {
            ans[c - '0'] = 0;
        }
    }
    for (bool b : ans) cout << b;
    cout << '\n';
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}