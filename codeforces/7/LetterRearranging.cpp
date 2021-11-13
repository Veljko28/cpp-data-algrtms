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


bool isPalindrome7(string s) {
	string a = s;
	reverse(a.begin(), a.end());
	return a == s;
}

void solve7() {
	string s;
	cin >> s;
	if (!isPalindrome7(s)) {
		cout << s << '\n';
		return;
	}

	for (int i = 1; i < s.length(); i++) {
		char t = s[i];
		s[i] = s[i - 1];
		s[i - 1] = t;
		if (!isPalindrome7(s)) {
			cout << s << '\n';
			return;
		}
	}

	cout << -1 << '\n';
}

void LetterRearranging()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while (t--) {
		solve7();
	}
}


