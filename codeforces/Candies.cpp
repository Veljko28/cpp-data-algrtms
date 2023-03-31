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
    ll n;
    cin >> n;
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    vector<int> a;
    bool ok = 0;
    for (int i = 29; i > 0; i--) {
        if ((n >> i)%2) {
            a.push_back(2);
            ok = 1;
        }
        else if (ok) a.push_back(1);
    }
    cout << a.size() << '\n';
    for (int& i : a) cout << i << ' ';
    cout << '\n';
}


int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}
