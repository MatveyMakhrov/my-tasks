#include <iostream>

int main() {
	int x1(0), x2(0), y1(0), y2(0);
	std::cin >> x1 >> y1 >> x2 >> y2;
	if (x1 - 1 == x2 || x1 + 1 == x2 || x1 == x2) {
		if (y1 - 1 == y2 || y1 + 1 == y2 || y1 == y2) {
			std::cout << "YES";
		}
		else {
			std::cout << "NO";
		}
	}
	else {
		std::cout << "NO";
	}
}
