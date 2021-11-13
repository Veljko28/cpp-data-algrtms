#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

int HelpfulMath()
{
	string x;
	cin >> x;
	if (x.length() == 1) {
		cout << x << endl;
		return 0;
	}
	vector<int> a;
	for (int i = 0; i < x.length(); i += 2)
	{
		a.push_back(x[i] - '0');
	}
	sort(a.begin(), a.end());
	string res;
	for (int i : a) {
		res += to_string(i) + "+";
	}
	res = res.substr(0, res.length() - 1);
	cout << res << endl;
	return 0;
}

