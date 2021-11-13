#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void ChipMoving()
{
	int n;
	cin >> n;
	int res = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		res += x % 2;
	}
	cout << min(res, n - res) << endl;
}