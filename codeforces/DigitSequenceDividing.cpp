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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void t2() {
	cout << "YES" << '\n';
}

void f2() {
	cout << "NO" << '\n';
}

void DigitSequenceDividing()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int q;
	cin >> q;

	while (q--) {
		int n;
		string s;
		read(n, s);
		if (n == 2 and s[0] >= s[1]) {
			f2();
		}
		else {
			t2();
			cout << 2 << '\n';
			cout << s[0] << " " << s.substr(1) << '\n';
		}
	}
}



