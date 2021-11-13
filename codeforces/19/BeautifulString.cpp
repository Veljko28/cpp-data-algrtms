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
#include <unordered_map>
#include <deque>
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void solve27() {
	string s;
	cin >> s;
	int i = 0;
	while (i < s.length()) {
		if (s[i] == '?') {
			char p = i - 1 >= 0 ? s[i - 1] : 'd';
			char n = i + 1 < s.length() ? s[i + 1] : 'e';
			for (char c : {'a', 'b', 'c'}) {
				if (c != p and c != n) {
					s[i] = c;
					break;
				}
			}
		}
		else i++;
	}
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i + 1]) {
			cout << -1 << '\n';
			return;
		}
	}
	cout << s << '\n';
}

void BeautifulString()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		solve27();
	}
}





