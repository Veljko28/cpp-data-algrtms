#include <iostream>
using namespace std;

void Team()
{
	unsigned short n, c = 0;
	int a[3];
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a[0] >> a[1] >> a[2];
		if ((a[0] and a[1]) or (a[0] and a[2]) or (a[1] and a[2])) {
			++c;
		}
	}
	std::cout << c;
}