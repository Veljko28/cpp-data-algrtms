#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
using namespace std;
#define ll long long
#define N 10005

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

bool primes[N];

void init() {
	memset(primes, true, sizeof(primes));
	primes[0] = false;
	for (int i = 2; i * i < N; i++) {
		if (primes[i] == true) {
			for (int j = i * 2; j < N; j += i) {
				primes[j] = false;
			}
		}
	}
}

void AlmostPrimes()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	init();
	int n, ans = 0;
	cin >> n;
	for (int i = 6; i <= n; i++) {
		int a = 0;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				if (j * j == i and primes[j]) {
					a++;
				}
				else {
					if (primes[j]) a++;
					if (primes[i / j]) a++;
				}
			}
		}
		if (a == 2) ans++;
	}

	cout << ans << '\n';
}

