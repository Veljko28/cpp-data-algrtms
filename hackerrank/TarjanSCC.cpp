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

int id = 0;
int sccCount = 0;

vector<vector<int>> adj;
vector<int> ids, low;
vector<bool> onSt;
stack<int> st;

void dfs(int i) {
    ids[i] = low[i] = id++;
    st.push(i);
    onSt[i] = 1;
    for (int j : adj[i]) {
        if (ids[j] == -1) {
            dfs(j);
        }
        if (onSt[j]) low[i] = min(low[i], low[j]);
    }

    if (ids[i] == low[i]) {
        while (st.size()) {
            int node = st.top();
            onSt[node] = 0;
            low[node] = ids[i];
            st.pop();
            if (node == i) break;
        }
        sccCount++;
    }
}



void solve() {
    int n;
    cin >> n;
    adj = vector<vector<int>>(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        while (k--) {
            int j;
            cin >> j;
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
    onSt = vector<bool>(n);
    ids = vector<int>(n), low = vector<int>(n);
    for (int i = 0; i < n; i++) {
        if (ids[i] == -1) dfs(i);
    }
    
    cout << sccCount << '\n';
    for (int i = 0; i < n; i++) cout << low[i] << ' ';
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
