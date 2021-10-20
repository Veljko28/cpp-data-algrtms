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

void Football()
{
	sync;
	int n;
	cin >> n;
	int v[2] = { 0,0 };
	vector<string> a;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (i == 0 or s != a[0]) a.push_back(s);
		if (a[0] == s) {
			v[0]++;
		}
		else v[1]++;
	}
	if (v[0] > v[1]) {
		cout << a[0] << '\n';
	}
	else cout << a[1] << '\n';
}
