#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long 
#define vi vector<int>
#define vbfor(a) for (auto& i : a) cin >> i
#define vifor(a) for (int& i : a) cin >> i;
#define all(a) (a).begin(), (a).end()
#define prv(a) for (int i =0;i<a.size();i++) { if (i+1 == a.size() ) cout << i << '\n'; else cout << i << ' '; }
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'

using namespace std;


void solve1() {
	int n;
	cin >> n;
	vi a(n);
	vi b(2, 0);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[a[i] % 2]++;
	}
	if (b[0] % 2 == 0 and b[1] % 2 == 0) {
		yes;
	}
	else {
		sort(all(a));
		bool ok = false;
		for (int i = 1; i < n; i++) {
			if (abs(a[i] - a[i - 1]) == 1) {
				ok = true;
				break;
			}
		}
		if (ok) yes;
		else no;
	}
}


bool multi = 0;

void TavasAndSaDDas() {
	sync;
	int t = 1;
	if (multi) cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int ans = 0;
		int a = 0;
		while (n) {
			if (n % 10 == 7) {
				ans += (1 << a);
			}
			n /= 10;
			a++;
		}
		for (int i = 1; i < a; i++) {
			ans += (1 << i);
		}
		cout << ans + 1 << '\n';
	}
}