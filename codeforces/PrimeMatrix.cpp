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

vector<bool> eratothenes() {
    const int size = 1e6 + 5;
    vector<bool> primes(size, 1);
    primes[0] = primes[1] = 0;
    for (int i = 2;i*i<=size;i++){
        if (!primes[i]) continue;
        for (int j = i + i; j <= size; j += i) primes[j] = 0;
    }
    return primes;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    vector<bool> primes = eratothenes();
    vector<int> r(n), c(m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int d = a[i][j];
            while (!primes[d]) d++;
            r[i] += (d - a[i][j]);
            c[j] += (d - a[i][j]);
        }
    }
    cout << min(*min_element(all(r)), *min_element(all(c))) << "\n";
}

int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}