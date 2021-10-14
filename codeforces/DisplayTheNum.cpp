#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;


void DisplayTheNum()
{
	std::ios::sync_with_stdio(false);

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n % 2 == 0) {
			string s(n / 2, '1');
			cout << s << '\n';
		}
		else {
			string b = "7";
			n -= 3;
			if (n > 0) {
				string c(n / 2, '1');
				cout << b + c << '\n';
			}
			else cout << b << '\n';
		}
	}
}

