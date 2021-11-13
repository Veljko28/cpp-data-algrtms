#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void DeleteFromList()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s, t;
	read(s, t);
	int a = 0;
	while (true) {
		int i = s.length() - a - 1;
		int j = t.length() - a - 1;
		if (i >= 0 and j >= 0 and s[i] == t[j]) {
			a++;
		}
		else break;
	}
	cout << (s.length() + t.length()) - (2 * a) << '\n';
}

