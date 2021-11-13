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


void BowWowAndTheTimetable()
{
	sync;
	string s;
	cin >> s;
	int a = count(s.begin(), s.end(), '1');
	if (s == "0" or s.length() == 0) cout << 0 << '\n';
	else if (a == 1) {
		cout << ceil((s.length() - 1) / 2.0) << '\n';
	}
	else cout << ceil(s.length() / 2.0) << '\n';
}





