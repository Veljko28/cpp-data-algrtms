#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;
#define ll long long

int switched(int a) {
	return a == 1 ? 0 : 1;
}


void LightsOut()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	vector<vector<int>> a(3);
	for (int i = 0; i < 3; i++) {
		vector<int> b(3);
		for (int& j : b) cin >> j;
		a[i] = b;
	}

	int ans[3][3] = {
		{ 1, 1, 1 },
		{ 1, 1, 1 },
		{ 1, 1, 1 }
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a[i][j] % 2 != 0 and a[i][j] != 0) {
				ans[i][j] = switched(ans[i][j]);
				if (i + 1 < 3) ans[i + 1][j] = switched(ans[i + 1][j]);
				if (i - 1 >= 0) ans[i - 1][j] = switched(ans[i - 1][j]);
				if (j + 1 < 3) ans[i][j + 1] = switched(ans[i][j + 1]);
				if (j - 1 >= 0) ans[i][j - 1] = switched(ans[i][j - 1]);

			}
		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << ans[i][j];
		}
		cout << '\n';
	}
}

