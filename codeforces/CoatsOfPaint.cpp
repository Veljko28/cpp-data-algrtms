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
	int n, x;
	cin >> n >> x;
	vector<int> l(x), r(x);
	for (int i = 0; i < x; i++) {
		cin >> l[i] >> r[i];
	}
	sort(all(l));
	sort(all(r));
	int i = 1, j = 0;
	int curr = 0, mx = 0, ans = l[0];
	while (i < x and j < x) {
		if (l[i] <= r[j]) {
			mx++;
			if (mx > curr) {
				curr = mx;
				ans = l[i];
			}
			i++;
		}
		else mx--, j++;
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