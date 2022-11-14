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
#include <fstream>
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


bool customSort(pair<ll, ll>& a, pair<ll, ll>& b) {
	if (a.first == b.first) {
		b.second > a.second;
	}
	return a.first > b.first;
}


void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> a;
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		if (j >= k) ans++;
		else a.push_back(j);
	}
	sort(all(a));
	n = (int)a.size();
	int l = 0, r = n - 1;
	while (l < r) {
		if (a[l] + a[r] >= k) {
			ans++, r--, l++;
		}
		else l++;
	}
	cout << ans << '\n';
}

int main() {
	sync;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}