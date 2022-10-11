#include <iostream>
 
int main() {
	long long n(0), m(0), a(0);
	long long k1(0), k2(0), k(0);
	std::cin >> n >> m >> a;
	if (n <= a) {
		k1 = k + 1;
	}
	else {
		k1 = (n + a - 1) / a;
	}
	if (m <= a) {
		k2 = k + 1;
	}
	else {
		k2 = (m + a - 1) / a;
	}
	k = k1 * k2;
	std::cout << k;
}
