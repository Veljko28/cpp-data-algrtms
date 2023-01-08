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

int n, x;
vector<vector<bool>> edges;
vector<int> cnt;
unordered_set<int> s;



void solve() {
    cin >> n >> x;
    edges = vector<vector<bool>>(n + 1, vector<bool>(n + 1));
    cnt = vector<int>(n + 1);
    int l, r;
    for (int i = 0; i < n - 1; i++) {
        cin >> l >> r;
        if (!edges[l][r]) cnt[l]++;
        if (!edges[r][l]) cnt[r]++;
        edges[l][r] = edges[r][l] = 1;

        if (cnt[l] == 1) s.insert(l);
        else if (cnt[l] != 1 and s.find(l) != s.end()) s.erase(l);

        if (cnt[r] == 1) s.insert(r);
        else if (cnt[r] != 1 and s.find(r) != s.end()) s.erase(r);
    }

    if (cnt[x] == 1 or n == 1) {
        cout << "Ayush\n";
        return;
    }
    vector<string> ans = { "Ayush\n", "Ashish\n" };
    cout << ans[n % 2];
}

int main() {
    sync;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}