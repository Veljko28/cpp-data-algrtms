#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>


int main(int args, std::vector<int> argv) {
	int a[5];
	for (int i = 0; i < 5; i++)
	{
		a[i] = i;
	}
	for (int i : a) {
		std::cout << i;
	}
	return 0;
}