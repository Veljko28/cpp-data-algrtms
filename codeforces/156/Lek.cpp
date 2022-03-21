#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

#define sync ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define vifor(a) for (int& i : a) cin >> i;
#define ll long long
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define all(a) (a).begin(), (a).end()
#define pii pair<int,int>

using namespace std;

void Lek() {
	sync;
	int n;
	cin >> n;
	vector<int> a(n);
	vifor(a);
	vector<pii> b;
	int j = 0;
	for (int i = 0; i < n-1; i++) {
		while (i<n - 1 and a[i]>a[i + 1]) i++;
		if (j != i) {
			reverse(a.begin() + j, a.begin() + i + 1);
			b.push_back({ j + 1,i + 1 });
		}
		j = i + 1;
	}
	if (is_sorted(all(a))) {
		cout << "Svet je spasen" << '\n';
		cout << b.size() << '\n';
		for (pii p : b) {
			cout << p.first << ' ' << p.second << '\n';
		}
	}
	else cout << "Nema spasa" << '\n';
}