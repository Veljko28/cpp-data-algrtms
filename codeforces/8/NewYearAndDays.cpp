#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void NewYearAndDays()
{
	sync;
	int n;
	string of, type;
	read(n, of, type);
	if (type == "week") {
		if (n == 5 or n == 6) {
			cout << 53 << '\n';
		}
		else cout << 52 << '\n';
	}
	else {
		if (n <= 29) cout << 12 << '\n';
		else if (n == 30) cout << 11 << '\n';
		else cout << 7 << '\n';
	}
}



