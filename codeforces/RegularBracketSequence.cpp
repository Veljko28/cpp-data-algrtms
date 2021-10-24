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

void solve20() {
	string s;
	cin >> s;
	if (s.length() % 2 == 0 and s[0] != ')' and s[s.length() - 1] != '(') {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}

void RegularBracketSequence()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve20();
	}
}


