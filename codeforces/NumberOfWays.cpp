#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
#include <unordered_map>
#include <queue>
#include <deque>
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define yes  pf("YES\n")
#define no   pf("NO\n")
#define all(c) (c).begin(), (c).end()
#define ff first
#define ss second
#define min_heap_pq priority_queue<int,vi,greater<int>>
using namespace std;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return (a * b) / gcd(a, b);
}

vector<bool> Eratothenes(ll n) {
	vector<bool> primes(n + 1, true);
	primes[0] = primes[1] = false;
	for (ll i = 2; i * i <= n; i++) {
		if (primes[i]) {
			for (ll j = i * i; j <= n; j += i) {
				primes[j] = false;
			}
		}
	}
	return primes;
}

void solve() {
	int n;
	cin >> n;
	vector<ll> a(n);
	ll s = 0;
	for (ll& i : a) {
		cin >> i;
		s += i;
	}
	if (s % 3) {
		cout << "0\n";
		return;
	}
	ll c = 0, d = 0;
	ll b = 0;
	for (int i = 0; i < n - 1; i++) {
		b += a[i];
		if (b == 2 * s / 3) d += c;
		if (b == s / 3) c++;
	}
	cout << d << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}