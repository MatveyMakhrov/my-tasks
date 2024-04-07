#include <iostream>
#include <cmath>

int main() {
	int n(0);
	std::cin >> n;
	if (n < 7) {
		std::cout << 0;
	}
	else if (n == 7) {
		std::cout << 1;
	}
	else if (n > 7) {
		std::cout << std::pow(26, n - 7) * ((n - 7) + 1);
	}
}