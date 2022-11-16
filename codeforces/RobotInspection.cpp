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


void solve() {
	int n;
	vector<int> a(501, -1);
	cin >> n;
	int ans = 0;
	for (int i = 0,j; i < n; i++) {
		cin >> j;
		if (a[j] != -1) {
			ans += a[j];
			continue;
		}
		int b = 0;
		for (int i = 1; i <= j / 2; i++) {
			if (j % i == 0) b += i;
		}
		if (b == j) ans += (a[j] = 1);
		else a[j] = 0;
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