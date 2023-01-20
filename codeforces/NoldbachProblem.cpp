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

const int MAXN = 1e3 + 5;

vector<bool> erathostenes(){
    vector<bool> prm(MAXN,1);
    prm[0] = prm[1] = 0;
    for (int i = 2; i <= MAXN; i++) {
        if (!prm[i]) continue;
        for (int j = i+i; j <= MAXN; j += i) {
            prm[j] = 0;
        }
    }
    return prm;
}


void solve() {
    int n, k;
    cin >> n >> k;
    vector<bool> primes = erathostenes();
    int i = 2, j = 3;
    int ans = 0;
    while (true) {
        if (!primes[i] or !primes[j] or (i+j+1) > n) break;
        if (primes[i + j + 1]) ans++;
        i = j;
        j++;
        while (j < n and !primes[j]) j++;
    }
    if (ans >= k) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}