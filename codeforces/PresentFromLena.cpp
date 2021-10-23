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


void PresentFromLena()
{
	sync;
	int n;
	cin >> n;
	int b = n * 2;
	vector<string> a;
	for (int i = 0; i <= n; i++) {
		string s(b, ' ');
		for (int k = 0; k < i; k++) {
			s += to_string(k) + " ";
		}
		for (int l = i; l >= 0; l--) {
			if (l == 0) s += to_string(l);
			else s += to_string(l) + " ";
		}
		cout << s << '\n';
		if (i != n) a.push_back(s);
		b -= 2;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		cout << a[i] << '\n';
	}
}
