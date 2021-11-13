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


void BlendOfSpringTime()
{
	sync;
	string s;
	read(s);
	string a[] = { "ABC", "ACB" ,"BAC", "BCA", "CAB", "CBA" };
	for (int i = 0; i < 6; i++) {
		auto b = s.find(a[i]);
		if (b != std::string::npos) {
			cout << "Yes" << '\n';
			return;
		}
	}
	cout << "No" << '\n';
}





