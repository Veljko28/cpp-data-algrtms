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


void solve14() {
	auto mult = [](string s, int k) -> string {
		string a = "";
		while (k--) {
			a += s;
		}
		return a;
	};

	string a, b;
	read(a, b);
	int n = a.length(), m = b.length();
	int g = gcd(n, m);
	if (mult(a, m / g) == mult(b, n / g)) {
		cout << mult(a, m / g) << '\n';
		return;
	}
	cout << -1 << '\n';
}

void LcmString()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve14();
	}
}
