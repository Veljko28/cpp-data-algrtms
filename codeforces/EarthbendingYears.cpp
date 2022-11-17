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
	int n, k;
	cin >> n >> k;
	vector<int> a;
	for (int i = 0,j; i < n; i++) {
		cin >> j;
		a.push_back(j);
	}
	int p = (a[0]+k)/4;
	a[0] = (a[0] + k) % 4;
	int i = 1;
	while (p){
		if (a.size() == i) {
			a.push_back(0);
		}
		int t = a[i]+p;
		a[i++] = t % 4;
		p = t / 4;
	}
	for (int i : a) {
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