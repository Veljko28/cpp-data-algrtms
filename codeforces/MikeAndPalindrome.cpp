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


void MikeAndPalindrome()
{
	sync;
	string s;
	cin >> s;
	s = "@" + s;
	int n = s.length() - 1;
	int c = 0;
	for (int i = 1; i + i <= n; i++) {
		if (s[i] != s[n - i + 1]) c++;
	}
	if ((c <= 1 and (n & 1)) or c == 1) cout << "YES" << '\n';
	else cout << "NO" << '\n';
}

