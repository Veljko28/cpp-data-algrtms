#include <iostream>



void SummerHeat() {
	int T, xa, xb, Xa, Xb;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> xa >> xb >> Xa >> Xb;
		std::cout << (Xa / xa) + (Xb / xb) << std::endl;
	}
}

void BellaCiao() {
	int T, D, d, P, Q;
	std::cin >> T;
	int* values = (int*)calloc(sizeof(int), T);
	for (int i = 0; i < T; i++) {
		std::cin >> D >> d >> P >> Q;
		int count = 0;
		for (int j = 1; j < D + 1; j++) {
			count += P;
			if (j % d == 0) P += Q;
		}
		values[i] = count;
	}
	for (int j = 0; j < T; j++) {
		std::cout << values[j] << std::endl;
	}
}