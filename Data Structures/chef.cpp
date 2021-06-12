#include <utility>
#include <iostream>

int buyPlease(int a, int b, int x, int y) {
	return a * x + b * y;
}

// inside main

void buyPlease() {
	std::pair<int, int> countPen = { 2, 5 };
	std::pair<int, int> bougth = { 10 ,24 };

	std::cout << countPen.first * bougth.first + countPen.second * bougth.second << std::endl;
}