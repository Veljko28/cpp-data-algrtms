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
    ll b = 0 , sa = 0 , c = 0;
    for (char ch : s) {
        switch (ch)
        {
        case 'B': b++; break;
        case 'S': sa++; break;
        case 'C': c++; break;
        default:
            break;
        }
    }
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll ans = 0;
    ll k = INT_MAX;
    if(b) k = min(k, nb / b);
    if(sa) k = min(k, ns / sa);
    if(c) k = min(k, nc / c);
    ans += k;
    if (b) nb -= (b * k);
    else nb = 0;

    if (sa) ns -= (sa * k);
    else ns = 0;

    if (c) nc -= (c * k);
    else nc = 0;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll rub;
    cin >> rub;
    while (nb or ns or nc) {
        ll price = 0;
        if (nb <= b)
        {
            price += (b - nb) * pb;
            nb = 0;
        }
        else nb -= b;
        if (ns <= sa)
        {
            price += (sa - ns) * ps;
            ns = 0;
        }
        else ns -= sa;
        if (nc <= c)
        {
            price += (c - nc) * pc;
            nc = 0;
        }
        else nc -= c;
        if (price > rub) break;
        ans++;
        rub -= price;
    }
    ans += rub / (b * pb + sa * ps + c * pc);
    cout << ans;
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}