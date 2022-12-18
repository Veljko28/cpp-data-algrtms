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

int n;
vector<pair<ll, ll>> a;
vector<ll> dp;
const int mod = 1e9 + 7;


struct Cmp { // sort comparator
    bool operator()(const pair<ll,ll>& a, const pair<ll,ll>& b) const {
        double at = atan2(a.second, a.first);
        double bt = atan2(b.second, b.first);

        return at < bt;
    }
};

bool u(set<pair<ll, ll>, Cmp> omotac) { // da li je tacka (0,0) unutra seta
    if (omotac.size() < 3) {
        for (pair<ll, ll> p : omotac) {
            if (p.first == 0 and p.second == 0)
                return 1;
        }
        return 0;
    }
    for (auto i = omotac.begin(); i != omotac.end(); i++) {
        pair<ll, ll> p = *i;
        pair<ll, ll> nx;
        if (next(i) == omotac.end()) {
            nx = *omotac.begin();
        }
        else nx = *next(i);
        int a = p.second - nx.second;
        int b = nx.first - p.first;
        int c = p.first * nx.second - nx.first * p.second;

        if (a*0+b*0+c > 0) return 0;
    }
    return 1;
}

ll check(int i, set<pair<ll, ll>, Cmp> omotac, vector<bool> visited, bool ok ) {
    if (i == n) return 0;
    if (dp[i] != -1) return dp[i];
    dp[i] = ok;
    for (int j = 1; j <= n; j++) {
        if (visited[j]) continue;
        omotac.insert(a[j]);
        visited[j] = 1;
        dp[i] += check(j, omotac, visited, ok ? 1 : u(omotac));
        dp[i] %= mod;
        omotac.erase(a[j]);
        visited[j] = 0;
    }
    return dp[i] %= mod;
}

void solve() {
    // ovo ne radi ali je blizu, problem je u redosledu tacaka omotaca
    cin >> n;
    a = vector<pair<ll, ll>>(n+1);
    dp = vector<ll>(n+1, -1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    set<pair<ll, ll>, Cmp> kon_omotac(a.begin()+1, a.end()); // tacke u omotacu sortirane u obrnutom smeru kazajke na satu
    cout << check(0, {}, vector<bool>(n + 1, 0)) % mod << '\n';
}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}