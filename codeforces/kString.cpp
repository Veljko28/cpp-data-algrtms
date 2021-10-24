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


void kString()
{
	sync;
	int k;
	string s, a, b;
	read(k, s);
	sort(s.begin(), s.end());
	for (int i = 0; i < s.length(); i++) {
		if ((i + 1) % k == 0) a += s[i];
	}
	b = a;
	for (int j = 0; j < k - 1; j++) a += b;
	b = a;
	sort(b.begin(), b.end());
	if (b == s) {
		cout << a << '\n';
	}
	else cout << -1 << '\n';
}
