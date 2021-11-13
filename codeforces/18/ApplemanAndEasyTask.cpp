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
#include <unordered_map>;
using namespace std;
#define ll long long
#define ull unsigned long long
#define sync ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
constexpr auto N = 1000;

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}

void ApplemanAndEasyTask()
{
	sync;
	int n;
	cin >> n;
	vector<vector<char>> a;
	for (int i = 0; i < n; i++) {
		vector<char> b;
		for (int j = 0; j < n; j++) {
			char c;
			cin >> c;
			b.push_back(c);
		}
		a.push_back(b);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int c = 0;
			if (i - 1 >= 0 and a[i - 1][j] == 'o') c++;
			if (j - 1 >= 0 and a[i][j - 1] == 'o') c++;
			if (i + 1 < n and a[i + 1][j] == 'o') c++;
			if (j + 1 < n and a[i][j + 1] == 'o') c++;
			if (c % 2) {
				cout << "NO" << '\n';
				return;
			}
		}
	}
	cout << "YES" << '\n';
}





