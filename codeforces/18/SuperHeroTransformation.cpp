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
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

bool isVowel1(char c) {
	c = tolower(c);
	return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

void SuperHeroTransformation()
{
	sync;
	string a, b;
	read(a, b);
	if (a.length() != b.length()) {
		cout << "No" << '\n';
		return;
	}
	for (int i = 0; i < a.length(); i++) {
		if ((!isVowel1(a[i]) and isVowel1(b[i])) or (isVowel1(a[i]) and !isVowel1(b[i]))) {
			cout << "No" << '\n';
			return;
		}
	}
	cout << "Yes" << '\n';
}





