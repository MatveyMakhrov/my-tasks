#include <iostream>
#include <vector>
 
int main() {
	int n(0), k(0), x(0), s(0);
	std::vector <int> vect(51);
	std::cin >> n >> k;
	for (int i(0); i < n; i++) {
		std::cin >> vect[i];
	}
	x = vect[k - 1];
	for (int i(0); i < n; i++) {
		if (vect[i] >= x && vect[i] > 0) {
			s++;
		}
	}
	std::cout << s;
}
