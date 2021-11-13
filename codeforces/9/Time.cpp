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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void Time()
{
	sync;
	string s;
	int n;
	read(s, n);

	stringstream a(s.substr(0, 2));
	int h;
	a >> h;

	stringstream b(s.substr(3, 5));
	int m;
	b >> m;

	int ans = h * 60 + m + n;
	ans %= 24 * 60;
	cout << setw(2) << setfill('0') << ans / 60;
	cout << ":";
	cout << setw(2) << setfill('0') << ans % 60;
}
