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
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void DifferentIsGood()
{
	sync;
	int n;
	cin >> n;
	string s;
	cin >> s;
	set<char> a;
	for (char c : s) {
		a.insert(c);
	}
	int b = s.length() - a.size();
	if (26 - a.size() < b) {
		cout << -1 << '\n';
	}
	else cout << b << '\n';
}





