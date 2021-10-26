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
constexpr auto N = 200000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void solve24() {
	string s;
	cin >> s;
	bool a[26];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < s.length(); i++) {
		int j = i;
		while (j + 1 < s.length() and s[j + 1] == s[i]) {
			j++;
		}
		if ((j - i) % 2 == 0) {
			a[s[i] - 97] = true;
		}
		i = j;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i]) {
			cout << char(97 + i);
		}
	}
	cout << '\n';

}

void BrokenKeyboard()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve24();
	}
}




