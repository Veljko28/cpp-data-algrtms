#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void DuffAndMeat()
{
	int n;
	cin >> n;
	vector<int> ai, pi;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int a, p;
		cin >> a >> p;
		ai.push_back(a);
		pi.push_back(p);
	}
	int m = pi[0] + 1;
	for (int i = 0; i < n; i++)
	{
		if (m < pi[i]) {
			count += ai[i] * m;
		}
		else count += ai[i] * pi[i];
		m = min(m, pi[i]);
	}
	cout << count << endl;
}
