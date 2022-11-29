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

vector<ll> pows(19, 1);


void solve() {
	ll k;
	cin >> k;
	if (k < 10) {
		cout << k << '\n';
		return;
	}
	ll lastpow = 0, prev = 0;
	int n = 0;
	for (int i = 1; i <= 18; i++) {
		lastpow += (pows[i] - pows[i - 1]) * i;
		if (lastpow >= k) {
			n = i;
			break;
		}
		prev = lastpow;
	}
	ll l = pows[n - 1], r = pows[n] - 1;
	ll ans = 0, pos = 0;
	while (l <= r) {
		ll m = (l + r) / 2;
		ll s = (m - pows[n - 1]) * n + prev + 1;
		if (s <= k) {
			if (m > ans) ans = m, pos = s;
			l = m + 1;
		}
		else r = m - 1;
	}
	cout << to_string(ans)[k - pos] << '\n';

}

int main() {
	sync;
	int t = 1;
	cin >> t;
	for (int i = 1; i <= 18; i++) {
		pows[i] = pows[i - 1] * 10;
	}
	while (t--) {
		solve();
	}
}