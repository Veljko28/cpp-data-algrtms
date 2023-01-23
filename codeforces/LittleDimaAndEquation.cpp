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
#include <unordered_set>
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

int sum(int x){
    string s = to_string(x);
    int ans= 0;
    for (char c : s) ans += (c-'0');
    return ans;
}

ll pw(ll x, int a){
    ll ans = 1;
    for (int i =0;i<a;i++){
        ans *= x;
    }
    return ans;
}

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    vector<ll> ans;
    for (ll i = 1;i<=81;i++){
        ll x = b*pw(i,a)+c;
        if (sum(x) == i and x < 1e9 and x > 0) ans.push_back(x);
    }
    cout << ans.size() << '\n';
    for (ll i : ans) cout << i << ' ';
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