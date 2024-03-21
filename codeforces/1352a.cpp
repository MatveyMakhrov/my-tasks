#include <iostream>
 
int main() {
	int t(0), n(0), n1(0), n2(0), n3(0), n4(0), n5(0), k(0);
	std::cin >> t;
	for (int i(0); i < t; i++) {
		std::cin >> n;
		n1 = n / 10000;
		n2 = (n - n1 * 10000) / 1000;
		n3 = ((n - n1 * 10000) - n2 * 1000) / 100;
		n4 = (((n - n1 * 10000) - n2 * 1000) - n3 * 100) / 10;
		n5 = n % 10;
 
		k = (n1 == 0) ? k : k + 1;
		k = (n2 == 0) ? k : k + 1;
		k = (n3 == 0) ? k : k + 1;
		k = (n4 == 0) ? k : k + 1;
		k = (n5 == 0) ? k : k + 1;
		std::cout << k << "\n";
		if (n1 != 0) {
			std::cout << n;
		}
		if (n2 != 0) {
			std::cout << n2 * 1000 << " ";
		}
		if (n3 != 0) {
			std::cout << n3 * 100 << " ";
		}
		if (n4 != 0) {
			std::cout << n4 * 10 << " ";
		}
		if (n5 != 0) {
			std::cout << n5;
		}
		k = 0;
		std::cout << "\n";
	}
}
