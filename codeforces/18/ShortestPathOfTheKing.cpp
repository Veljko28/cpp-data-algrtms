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

void ShortestPathOfTheKing()
{
	sync;
	string a;
	string b;
	read(a, b);
	int c[2] = { a[0] - 96, a[1] };
	int d[2] = { b[0] - 96, b[1] };
	vector<string> moves;
	while (true) {
		if (c[0] == d[0] and c[1] == d[1]) break;
		if (c[1] == d[1]) {
			if (c[0] > d[0]) {
				moves.push_back("L");
				c[0]--;
			}
			else {
				moves.push_back("R");
				c[0]++;
			}
		}
		else if (c[0] == d[0]) {
			if (c[1] > d[1]) {
				moves.push_back("D");
				c[1]--;
			}
			else {
				moves.push_back("U");
				c[1]++;
			}
		}
		else {
			if (c[0] > d[0] and c[1] > d[1]) {
				moves.push_back("LD");
				c[0]--; c[1]--;
			}
			else if (c[0] < d[0] and c[1] > d[1]) {
				moves.push_back("RD");
				c[0]++; c[1]--;
			}
			else if (c[0] > d[0] and c[1] < d[1]) {
				moves.push_back("LU");
				c[0]--; c[1]++;
			}
			else {
				moves.push_back("RU");
				c[0]++; c[1]++;
			}
		}
	}
	cout << moves.size() << '\n';
	for (string s : moves) {
		cout << s << '\n';
	}

}





