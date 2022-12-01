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
	int n;
	cin >> n;
	vector<int> a(n);
	vector<bool> dp((1e5) + 1, 0);
	set<int> s;
	for (int& i : a) {
		cin >> i;
	}
	int b = 0;
	dp[0] = 1;
	for (int i : a) {
		b += i;
		for (int j = b; j >= i; j--) {
			if (dp[j-i] and !dp[j]) {
				s.insert(j);
				dp[j] = 1;
			}
		}
	}
	cout << (int)s.size() << '\n';
	for (int i : s) {
		cout << i << ' ';
	}
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