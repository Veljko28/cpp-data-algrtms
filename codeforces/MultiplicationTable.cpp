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

void MultiplicationTable()
{
	sync;
	int n, x;
	read(n, x);
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (x % i == 0 and x / i <= n) ans++;
	}
	cout << ans << '\n';
}
