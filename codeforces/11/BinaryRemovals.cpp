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


void BinaryRemovals()
{
	sync;
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		int a = s.find("11");
		int b = s.rfind("00");
		if (a != -1 and b != -1 and a < b) {
			cout << "NO" << '\n';
		}
		else cout << "YES" << '\n';
	}
}

