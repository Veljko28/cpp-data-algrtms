#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void BitPP()
{
	int n, c = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		if (x == "X++") c++;
		else if (x == "++X") ++c;
		else if (x == "X--") c--;
		else --c;
	}
	cout << c << endl;
}
