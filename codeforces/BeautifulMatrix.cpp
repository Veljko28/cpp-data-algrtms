#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

void BeautifulMatrix()
{
	int pos[2];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			int x;
			cin >> x;
			if (x == 1) {
				pos[0] = i;
				pos[1] = j;
			}
		}
	}
	cout << abs(pos[0] - 2) + abs(pos[1] - 2) << endl;
}
