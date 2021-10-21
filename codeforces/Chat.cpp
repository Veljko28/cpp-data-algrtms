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

void Chat()
{
	sync;
	string s;
	cin >> s;
	int j = 0;
	string ans = "hello";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ans[j]) {
			j++;
		}
	}
	if (j == ans.length()) {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}
