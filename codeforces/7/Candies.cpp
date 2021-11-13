#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
#include <cstring>
#include <set>
using namespace std;
#define ll long long

template<typename... T>
void read(T& ...args) {
	((cin >> args), ...);
}


void Candies()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	read(n, m);
	int a = n / m, b = n % m;
	for (int i = 0; i < m - b; i++) {
		cout << a << ' ';
	}
	for (int j = 0; j < b; j++) {
		cout << a + 1 << ' ';
	}
	cout << '\n';
}



