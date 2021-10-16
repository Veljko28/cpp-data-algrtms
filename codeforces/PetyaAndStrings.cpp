#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void PetyaAndStrings()
{
	string a;
	string b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), [](char c) { return tolower(c);  });
	transform(b.begin(), b.end(), b.begin(), [](char c) { return tolower(c);  });
	int c = (a > b) ? 1 : (a == b) ? 0 : -1;
	cout << c << endl;
}
