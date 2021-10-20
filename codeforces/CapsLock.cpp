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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

bool caps_test(string s, int start) {
	string c = s.substr(start);
	transform(c.begin(), c.end(), c.begin(), ::toupper);
	return c == s.substr(start);
}

void CapsLock()
{
	sync;
	string s;
	cin >> s;
	if (caps_test(s, 0) or caps_test(s, 1)) {
		transform(s.begin(), s.end(), s.begin(), [](char c) {
			if (isupper(c)) {
				return tolower(c);
			}
			else return toupper(c);
			});
	}
	cout << s << '\n';
}
