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


void Towers()
{
	sync;
	int n, c = 0;
	cin >> n;
	vector<int> v(n);
	set<int> s;
	for (int& i : v) {
		cin >> i;
		s.insert(i);
	}
	for (auto i = s.begin(); i != s.end(); i++) {
		int a = count(v.begin(), v.end(), *i);
		if (a > c) c = a;
		if (a >= 2) n -= (a - 1);
	}
	cout << c << " " << n << '\n';
}

