#include <iostream>

int main() {
	int n(0), k(0), k1(0), t(0), q(0); // кол-во вёдер и длина сада
	std::cin >> n >> k;
	for (int i(0); i <= n; i++) {
		int a(0);
		std::cin >> a;
		t = k % a;
		if (t == 0) {
			k1++;
		}
		for (int j(0); j <= k1; j++) {
			if (t > q) {
				q = t;
			}
		}
		std::cout << q;
	}
}
