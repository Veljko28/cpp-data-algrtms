#include <iostream>
#include <vector>
#include <string>

void WayTooLong()
{
	unsigned short n;
	std::cin >> n;
	std::string s;
	std::vector<std::string> vec;
	for (int i = 0; i < n; i++) {
		std::cin >> s;
		if (s.length() > 10) {
			s = s[0] + std::to_string(s.length() - 2) + s[s.length() - 1];
		}
		vec.push_back(s);
	}

	for (std::string ss : vec) {
		std::cout << ss << std::endl;
	}
}