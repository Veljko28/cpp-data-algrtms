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
#define ui unsigned int
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vector<int>,greater<int>>
using namespace std;



void solve() {
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	if (k <= a) {
		for (int i = 1; i <= 3; i++) {
			cout << i + 3 * (k - 1) << '\n';
		}
	}
	if (k <= b) {
		for (int i = 1; i <= 3; i++) {
			cout << (a*3) + i + 3 * (k - 1) << '\n';
		}
	}
	if (k <= c) {
		for (int i = 1; i <= 3; i++) {
			cout << ((a + b) * 3) + i + 3 * (k - 1) << '\n';
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
