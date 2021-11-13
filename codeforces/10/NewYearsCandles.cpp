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
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void NewYearsCandles()
{
	sync;
	int a, b;
	int ans = 0;
	read(a, b);
	while (true) {
		if (ans % b == 0 and ans != 0) {
			a++;
		}
		if (a == 0) break;
		a--;
		ans++;
	}
	cout << ans << '\n';
}
