#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void LineToCashier()
{
	sync;
	int n;
	cin >> n;
	vector<int> k(n);
	vector<vector<int>> a;
	for (int& i : k) cin >> i;
	for (int i : k) {
		vector<int> b;
		for (int j = 0; j < i; j++) {
			int c;
			cin >> c;
			b.push_back(c);
		}
		a.push_back(b);
	}
	int ans = numeric_limits<int>::max();
	for (vector<int> v : a) {
		int sum = 0;
		for (int i : v) {
			sum += i * 5;
		}
		sum += v.size() * 15;
		ans = min(sum, ans);
	}

	cout << ans << '\n';
}
