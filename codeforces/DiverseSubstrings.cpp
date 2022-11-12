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



void solve() {
	int n;
	string s;
	cin >> n >> s;
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int mx = 0;
		vector<int> b(10,0);
		int c = 0;
		for (int j = i; j < min(n, i+300); j++) {
			int ch = s[j] - 48;
			if (!b[ch]) c++;
			mx = max(mx,++b[ch]);
			if (mx <= c) ans++;
		}
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