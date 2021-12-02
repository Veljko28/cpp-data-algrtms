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

int main()
{
	sync;
	int n, t;
	int idx = 1;
	read(n, t);
	vector<int> a(n+1);
	for (int i = 1; i <= n; i++) {
		int b;
		cin >> b;
		a[i] = b;
	}
	while (idx < t)
	{
		idx += a[idx];
	}
	if (idx == t) cout << "Yes" << '\n';
	else cout << "No" << '\n';
}
