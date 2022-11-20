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
#define PI 3.14159265358979323846 
#define all(c) (c).begin(), (c).end()
using namespace std;


void solve() {
	int n;
	cin >> n;
	deque<string> d;
	while (n--) {
		int t;
		cin >> t;
		if (t == 1) {
			string s;
			cin >> s;
			d.push_front(s);
		}
		else {
			cout << d.back() << '\n';
			d.push_front(d.back());
			d.pop_back();
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