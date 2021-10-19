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

void SerialKiller()
{
	sync;
	vector<string> v(2);
	for (string& s : v) cin >> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << v[0] << " " << v[1] << '\n';
		string a, b;
		read(a, b);
		if (v[0] == a) v[0] = b;
		else v[1] = b;
	}
	cout << v[0] << " " << v[1] << '\n';
}



