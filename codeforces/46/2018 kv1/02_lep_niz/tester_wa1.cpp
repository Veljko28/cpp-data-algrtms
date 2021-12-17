#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int a[100005];

int kv(int x) {
	return x*x;
}

// 28/45, svuda koriscen int (na nekim mestima treba ll)

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cerr.tie(nullptr);

	int n, c, k;
	cin >> n >> c >> k;
	for (int i=0; i<n; i++)
		cin >> a[i];
	if (k == 0) {
		int z = count(a, a+n, 0);
		cout << n-z+min(z, c) << ' ' << min(z, c) << '\n';
	} else if (k == 1) {
		cout << accumulate(a, a+n, 0) + c << ' ' << c << '\n';
	} else {
		int h = max_element(a, a+n) - a;
		int y = 0, z = 0;
		if (kv(a[h] + c) > kv(a[h])) {
			a[h] += c;
			z += c;
		}
		for (int i=0; i<n; i++)
			y += kv(a[i]);
		cout << y << ' ' << z << '\n';
	}
}