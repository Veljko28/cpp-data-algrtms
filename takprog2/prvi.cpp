#include <iostream>
#include <vector>
#include <string>
#include <map>

#define sync ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(a) (a).begin(), (a).end()
#define ll long long


using namespace std;

int main() {
	sync;
	int n;
	cin >> n;
	vector<int> b(n), c(n);
	map<int, int> m;
	for (int i = 0,j; i < n; i++) {
		cin >> j;
		m[j]++;
	}
	for (int& i : b) cin >> i;
	for (int& i : c) cin >> i;
	
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ans += m[b[c[i] - 1]];
	}

	cout << ans << '\n';
}
