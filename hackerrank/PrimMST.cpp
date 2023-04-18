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

vector<vector<pair<int,int>>> adj;
priority_queue<tuple<int, int, int>> pq;
vector<bool> visited;

void addEdges(int id) {
    visited[id] = 1;

    for (pair<int,int> i : adj[id]) {
        if (!visited[i.first]) {
            pq.push({ i.second, i.first, id });
        }
    }
}

void solve() {
    int n;
    cin >> n;
    adj = vector<vector<pair<int,int>>>(n);
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        for (int j = 0,edge, cost; j < k; j++) {
            cin >> edge >> cost;
            adj[i].push_back({edge,cost});
            adj[edge].push_back({i,cost});
        }
    }
    int st;
    cin >> st;
    visited = vector<bool>(n, 0);
    addEdges(st);
    vector<tuple<int, int, int>> mst;
    int cost = 0;
    while (!pq.empty()) {
        tuple<int, int, int> t = pq.top();
        pq.pop();

        if (visited[get<2>(t)]) continue;
        mst.push_back(t);
        cost += get<0>(t);
    
        addEdges(get<2>(t));
    }

    if (mst.size() != n - 1) cout << "-1\n";
    else {
        cout << "Cost: " << cost << "\nEdges:\n";
        for (auto edge : mst) {
            cout << get<0>(edge) << ' ' << get<1>(edge) << ' ' << get<2>(edge) << '\n';
        }
    }

}


int main() {
    sync;
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
}
