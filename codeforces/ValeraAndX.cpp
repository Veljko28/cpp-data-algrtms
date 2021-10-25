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


void ValeraAndX()
{
	sync;
	int n;
	cin >> n;
	char a[2];
	string ans = "YES";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			char c;
			cin >> c;
			if (i == 0 and j == 0) a[0] = c;
			if (i == 0 and j == 1) a[1] = c;

			if (((i == j or (i + j) == n - 1) and c != a[0])) {
				ans = "NO";
			}
			else if (!(i == j or (i + j) == n - 1) and c != a[1]) {
				ans = "NO";
			}
		}
	}
	if (a[0] == a[1]) ans = "NO";
	cout << ans << '\n';
}

