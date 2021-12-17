#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;

	double boundLo = -1;

	for (int i = 0; i < n; i++) {
		int k, c;
		cin >> k >> c;
		boundLo = max(boundLo, (c-0.5)/k);
	}

	cout << boundLo;
}
