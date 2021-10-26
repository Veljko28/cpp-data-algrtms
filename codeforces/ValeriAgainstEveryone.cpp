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
#include <unordered_map>;
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void solve26() {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	if (s.size() != n) {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}

void ValeriAgainstEveryone()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve26();
	}
}




