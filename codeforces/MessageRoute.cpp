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
 
int n, m;
vector<vector<int>> a;
vector<bool> visited;
 
void solve() {
	cin >> n >> m;
	a = vector<vector<int>>(n+1);
	visited = vector<bool>(n+1,0);
    for (int i =0;i<m;i++){
        int l,r;
        cin >> l >> r;
        a[l].push_back(r);
        a[r].push_back(l);
    }
    vector<int> path(n+1,-1);
    queue<int> q;
    q.push(1);
    while (!q.empty()){
        int i = q.front();
        q.pop();
        visited[i] = 1;
        if (i == n) break;
        for (int j : a[i]){
           if (!visited[j]) {
            q.push(j);
            visited[j] = 1;
            path[j] = i;
           }
        }
    }
    if (path[n] != -1){
        vector<int> ans = {n};
        int i = path[n];
        while (i != 1){
            ans.push_back(i);
            i = path[i];
        }
        int sz = ans.size();
        cout << sz+1 << '\n';
        cout << 1 << ' ';
        for (int i = sz-1;i>=0;i--){
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    else cout << "IMPOSSIBLE\n";
}
 
int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}