#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
#include <sstream>
#include <iomanip>
#include <map>
#include <stack>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void CormenBestFriend()
{
	sync;
	int n, k;
	int ans = 0;
	read(n, k);
	vector<int> v(n);
	for (int& i : v) cin >> i;
	for (int i = 1; i < n; i++) {
		if (v[i - 1] + v[i] < k) {
			ans += k - (v[i - 1] + v[i]);
			v[i] += k - (v[i - 1] + v[i]);
		}
	}
	cout << ans << '\n';
	for (int i = 0; i < n; i++) {
		if (i == n - 1) {
			cout << v[i];
		}
		else cout << v[i] << ' ';
	}
}
