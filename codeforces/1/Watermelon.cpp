#include <iostream>

void Watermelon()
{
	unsigned short w;
	std::cin >> w;
	if (w % 2 == 0 and w != 2) {
		std::cout << "YES";
	}
	else std::cout << "NO";
}