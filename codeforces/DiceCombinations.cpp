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

ll n;
vector<ll> dp;
int mod = 1e9 + 7;

ll check(ll m) {
	if (dp[m] != -1) return dp[m];
	ll ans = 0;
	for (ll i = 1; i <= min(6LL,m); i++) {
		ans += check(m - i);
	}
	return dp[m] = ans % mod;
}

void solve() {
	cin >> n;
	dp = vector<ll>(n+1, -1);
	dp[0] = 1;
	cout << check(n) << '\n';
}

int main() {
	sync;
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}