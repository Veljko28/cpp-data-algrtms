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

void t1() {
	cout << "Yes" << '\n';
}

void f1() {
	cout << "No" << '\n';
}

void DoggoRecoloring()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s;
	read(n, s);
	int m[26];
	memset(m, 0, sizeof(m));
	if (n == 1) {
		t1();
		return;
	}
	for (int i = 0; i < n; i++) {
		m[s[i] - 97]++;
	}

	bool a = false, b = false;
	for (int i = 0; i < 26; i++) {
		if (m[i] == 1) a = true;
		else if (m[i] > 1) b = true;
	}
	if (a) {
		if (b) t1();
		else f1();
	}
	else t1();
}


