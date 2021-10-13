#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void Capitalization()
{
	string x;
	cin >> x;
	cout << static_cast<char>(toupper(x[0])) + x.substr(1, x.length()) << endl;
}

