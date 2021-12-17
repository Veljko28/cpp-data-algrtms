#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int a[100005], n, c, k;
ll hy = -1e18, hz = -1;

ll pw(ll x, ll y) {
	if (y == 0)
		return x == 0 ? 0 : 1;
	else if (y == 1)
		return x;
	else
		return x*x;
}

ll vrednost() {
	ll y = 0;
	for (int i=0; i<n; i++)
		y += pw(a[i], k);
	return y;
}

void rek(int i, int c) {
	if (i == n) {
		ll y = vrednost();
		if (y > hy || (y == hy && ::c - c < hz)) {
			hy = y;
			hz = ::c - c;
		}
		return;
	}

	for (int j=0; j<=c; j++) {
		int t = a[i];
		a[i] = t + j;
		rek(i+1, c-j);
		a[i] = t;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	cin >> n >> c >> k;
	for (int i=0; i<n; i++)
		cin >> a[i];

	rek(0, c);
	cout << hy << ' ' << hz << '\n';
}