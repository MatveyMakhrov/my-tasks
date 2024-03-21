#include <iostream>

int main() {
	int a(0), b(0), c(0);
	std::cin >> a >> b >> c;
	if (a == b) {
		if (a == c) {
			std::cout << 3;
		}
		else {
			std::cout << 2;
		}
	}
	else {
		if (a == c) {
			if (b == c) {
				std::cout << 3;
			}
			else {
				std::cout << 2;
			}
		}
		else {
			if (b == c) {
				std::cout << 2;
			}
			else {
			std::cout << 0;
			}
		}
	}
}
