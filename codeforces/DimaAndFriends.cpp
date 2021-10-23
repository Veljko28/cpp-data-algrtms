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


void DimaAndFriends()
{
	sync;
	int n, a, b = 0, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		b += a;
	}
	for (int j = 1; j <= 5; j++) {
		if ((b + j) % (n + 1) != 1) ans++;
	}
	cout << ans << '\n';
}

