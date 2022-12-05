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

void solve(){
	string s, t;
	cin >> s >> t;
	int n = (int)s.length(), m = (int)t.length();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n-i; j++) {
			int len = m - j - 1;
			if (i + j < len) continue;
			string st1 = s.substr(i, j);
			string st2;
			for (int k = (i + j) - len; k <= (i + j); k++) {
				st2 += s[k];
			}
			reverse(all(st2));
			if (st1 + st2 == t) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

int main() {
	sync;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}