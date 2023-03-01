#include <iostream>
#include <vector>
#include <string>
#include <map>

#define sync ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(a) (a).begin(), (a).end()
#define ll long long


using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> b(n);
	map<int, vector<int>> m;
	for (int i = 0,j; i < n; i++) {
		cin >> j;
		if (!m[j].size()) {
			m[j].resize(2);
		}
		m[j][i % 2]++;
	}
	for (int& i : b) cin >> i;

	bool ok = 1;

	for (int i = 0; i < n; i++) {
		bool k = 0;
		if (m[b[i]].size() and m[b[i]][i % 2]) {
			m[b[i]][i % 2]--;
			k = 1;
		}
		else if (m[-b[i]].size() and m[-b[i]][i % 2 ? 0 : 1]) {
			m[-b[i]][i % 2 ? 0 : 1]--;
			k = 1;
		}

		if (!k) {
			ok = 0;
			break;
		}
	}

	if (ok) cout << "DA\n";
	else cout << "NE\n";
}

int main() {
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
