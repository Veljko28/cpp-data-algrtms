#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <cmath>
#include <map>
#include <set>

using namespace std;

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define ll long long 
#define pii pair<int,int> 
#define ff first
#define ss second
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

const int mod = 1e9 + 7;

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

void ThreePilesOfCandies() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		unsigned ll a, b, c;
		cin >> a >> b >> c;
		cout << (a + b + c - ((a + b + c) % 2)) / 2 << '\n';
	}
}