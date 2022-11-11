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
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;

bool customSort(pair<int, int>& a, pair<int, int>& b) {
	if (a.first == b.first) {
		return a.second < b.second;
	}
	return a.first < b.first;
}

void solve() {
	ll n, m;
	cin >> n >> m;
	ll d = 1;
	ll ans = 0;
	while ((n - 1) * d < m) {
		ans += m - ((n - 1) * d++);
	}
	cout << ans << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}