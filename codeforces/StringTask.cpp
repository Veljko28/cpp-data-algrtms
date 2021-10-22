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

void StringTask()
{
	sync;
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 0; i < s.length(); i++) {
		while (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y') {
			s.erase(s.begin() + i);
		}
		if (i != s.length()) {
			cout << '.';
			cout << s[i];
		}
	}
}
