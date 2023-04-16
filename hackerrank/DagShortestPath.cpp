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

int n, idx;
vector<vector<pair<int,int>>> adj;
vector<bool> visited;
vector<int> top_sort;


vector<int> minDistance(int start) {
    vector<int> dist(n, INT_MAX);
    dist[start] = 0;
    for (int i = 0; i < n; i++) {
        if (dist[start] != INT_MAX) {
            for (pair<int,int> p : adj[top_sort[i]]) {
                int w = dist[top_sort[i]] + p.second;
                dist[p.first] = min(dist[p.first], w);
            }
        }
    }

    return dist;
}


void solve() {
    cin >> n;
    adj = vector<vector<int>>(n + 1);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0,b,w; j < k; j++) {
            cin >> b >> w;
            adj[i].push_back({b,w});
        }
    }
    vector<int> deg(n);
    for (int i = 0; i < n; i++) {
        for (pair<int,int> p : adj[i]) deg[p.first]++;
    }

    queue<int> q;
    for (int i = 0; i < n; i++) if (!deg[i]) q.push(i);

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        top_sort.push_back(x);

        for (pair<int,int> p : adj[x]) {
            int i = p.first;
            deg[i]--;
            if (!deg[i]) {
                q.push(i);
            }
        }
    }
    if (top_sort.size() != n) {
        cout << "-1\n";
        return;
    }

    for (int i : top_sort) {
        cout << i << " ";
    }
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
