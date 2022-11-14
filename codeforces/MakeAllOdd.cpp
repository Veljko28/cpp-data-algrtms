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
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pi 3.1415926535897932384626429750288419716939937510
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define all(c) (c).begin(), (c).end()
#define min_heap_pq priority_queue<int,vi,greater<int>>
#define bit_count(x) __builtin_popcount(x);
using namespace std;



void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(2);
	for (int& i : a) {
		cin >> i;
		b[i % 2]++;
	}
	if (!b[1]) {
		cout << "-1\n";
		return;
	}
	else cout << b[0] << '\n';
}


int main() {
	sync;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
}

