#include <iostream>

int main() {
	unsigned int n(0), m(0);
	std::cin >> n >> m;
	unsigned long long int min_walls = static_cast<unsigned long long>(n) * m - 1;
	std::cout << min_walls;
	return 0;
}