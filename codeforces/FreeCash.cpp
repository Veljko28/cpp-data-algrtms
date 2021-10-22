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


void FreeCash()
{
	sync;
	int n, ans = 0, c = 1;
	int d[2];
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b;
		read(a, b);
		if (d[0] == a and d[1] == b) c++;
		else c = 1;
		if (c > ans) ans = c;
		d[0] = a; d[1] = b;
	}
	cout << ans << '\n';
}

