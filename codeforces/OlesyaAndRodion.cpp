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

void OlesyaAndRodion()
{
	sync;
	int n, t;
	read(n, t);
	if (n == 1 and t == 10) {
		cout << -1 << '\n';
	}
	else if (n >= 2 and t == 10) {
		for (int i = 1; i < n; i++) {
			cout << 1;
		}
		cout << 0 << '\n';
	}
	else {
		for (int i = 0; i < n; i++) {
			cout << t;
		}
		cout << '\n';
	}
}
