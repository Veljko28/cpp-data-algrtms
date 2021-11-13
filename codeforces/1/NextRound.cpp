#include <iostream>

void NextRound() {
	unsigned short n, k, c = 0;
	std::cin >> n >> k;
	short* a = (short*)malloc(sizeof(short) * n);
	for (int i = 0; i < n; i++) {
		short b;
		std::cin >> b;
		a[i] = b;
	}

	for (int j = 0; j < n; j++) {
		if (a[j] >= a[k - 1] && a[j] != 0) {
			++c;
		}
	}
	std::cout << c << std::endl;
}