#include <iostream>

int main() {
	int a(0), b(0);
	std::cin >> a >> b;
	if (a > b) {
		std::cout << 1;
	}
	if (a < b) {
		std::cout << 2;
	}
	if (a == b) {
		std::cout << 0;
	}
}
