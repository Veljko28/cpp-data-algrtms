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
    vector<vector<int>> adj(n + 1);
    for (int i = 1; i <= n; i++) {
        int k;
        cin >> k;
        for (int j = 0, l; j < k; j++) {
            cin >> l;
            adj[i].push_back(l);
            adj[l].push_back(i);
        }
    }
    vector<int> leaves;
    vector<int> deg(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            deg[j] = adj[j].size();
            if (deg[j] <= 1) {
                leaves.push_back(j);
                deg[j] = 0;
            }
        }
        int size = leaves.size();
        while (size <= n) {
            vector<int> new_leaves;
            for (int i : leaves) {
                for (int j : adj[i]) {
                    deg[j]--;
                    if (deg[j] == 1) new_leaves.push_back(j);
                }
                deg[i] = 0;
            }
            size += new_leaves.size();
            leaves = new_leaves;
        }
    }
    for (int i : leaves) cout << i << ' ';
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
