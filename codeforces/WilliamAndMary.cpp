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
	string s;
	getline(cin, s);
	int n = (int)s.length();
	int mx = INT_MIN, mn = INT_MAX;
	for (int i = 0; i < n;) {
		int j = i;
		while (j < n and s[j] != ' ') j++;
		int a = stoi(s.substr(i, j-i));
		if (a % 2) mx = max(mx, a);
		else mn = min(mn, a);
		i = j+1;
	}
	if (mx == INT_MIN or mn == INT_MAX) {
		cout << "None\n";
	}
	else cout << abs(mx - mn) << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}