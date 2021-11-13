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

bool isVowel8(char c) {
	return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

void Romaji()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		bool first = isVowel8(s[i]), second = s[i] == 'n' or (i + 1 < s.length() and isVowel8(s[i + 1]));
		if (!second and !first) {
			cout << "NO" << '\n';
			return;
		}
	}
	cout << "YES" << '\n';
}


