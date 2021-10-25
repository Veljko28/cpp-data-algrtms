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


void AniaAndMinimizing()
{
	sync;
	int n, k;
	read(n, k);
	string s;
	cin >> s;
	if (n == 1 and k >= 1) {
		cout << 0 << '\n';
		return;
	}
	for (int i = 0; i < n and k; i++) {
		if (i == 0) {
			if (s[i] != '1') {
				s[i] = '1'; k--;
			}
		}
		else {
			if (s[i] != '0') {
				s[i] = '0';
				k--;
			}
		}
	}
	cout << s << '\n';
}




