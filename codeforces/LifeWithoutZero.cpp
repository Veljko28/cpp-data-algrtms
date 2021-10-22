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


void LifeWithoutZero()
{
	sync;
	ll v[3];
	read(v[0], v[1]);
	v[2] = v[0] + v[1];
	for (int i = 0; i < 3; i++) {
		string s = to_string(v[i]);
		s.erase(remove(s.begin(), s.end(), '0'), s.end());
		v[i] = stoll(s);
	}
	if (v[2] == v[0] + v[1]) {
		cout << "YES" << '\n';
	}
	else cout << "NO" << '\n';
}
