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

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void KyoyaAndPhoneBooks()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a;
	cin >> a;
	set<string> s;
	for (int i = 0; i <= a.length(); i++) {
		for (char c = 'a'; c <= 'z'; c++) {
			s.insert(a.substr(0, i) + c + a.substr(i));
		}
	}
	cout << s.size() << '\n';
	//cout << (a.length()+1)*25+1 << '\n';
}


