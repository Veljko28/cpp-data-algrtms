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
constexpr auto N = 200000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void SumOfDigits()
{
	sync;
	ll sum = 0;
	int a = 1;
	string s;
	cin >> s;
	if (s.length() == 1) {
		cout << 0 << '\n';
		return;
	}
	for (char c : s) {
		sum += (c - 48);
	}
	while (sum >= 10) {
		string b = to_string(sum);
		sum = 0;
		for (char c : b) {
			sum += (c - 48);
		}
		a++;
	}
	cout << a << '\n';
}




