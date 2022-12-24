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
	int n, m;
	cin >> n >> m;
	vector<vector<int>> a(n+1);
	vector<int> degree(n + 1,0);
	for (int i = 0; i < m; i++) {
		int l, r;
		cin >> l >> r;
		a[l].push_back(r);
		degree[r]++;
	}
	priority_queue<int> pq;
	for (int i = 1; i <= n; i++) {
		if (!degree[i]) pq.push(i);
	}
	vector<int> ans;
	while (!pq.empty()) {
		int v = pq.top();
		pq.pop();
		ans.push_back(v);
		for (int i : a[v]) {
			degree[i]--;
			if (!degree[i]) pq.push(i);
		}
	}
	if (ans.size() != n) cout << "IMPOSSIBLE\n";
	else {
		for (int i : ans) cout << i << ' ';
		cout << '\n';
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