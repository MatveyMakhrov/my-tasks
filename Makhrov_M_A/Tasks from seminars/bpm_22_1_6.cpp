#include <iostream>

int main() {
    int h(0), w(0), x(0), y(0);
    std::cin >> h >> w >> x >> y;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (y == i) {
                if (x == j) {
                    std::cout << "0";
                }
            }
            if (i + 1 == y) {
                if (j - 1 == x) {
                    std::cout << 1;
                }
                if (j == x) {
                    std::cout << 1;
                }
                if (j + 1 == x) {
                    std::cout << 1 << std::endl;
                }
            }
            if (i == y) {
                if (j - 1 == x) {
                    std::cout << 1;
                }
                if (j + 1 == x) {
                    std::cout << 1 << std::endl;
                }
            }
            if (i - 1 == y) {
                if (j - 1 == x) {
                    std::cout << 1;
                }
                if (j == x) {
                    std::cout << 1;
                }
                if (j + 1 == x) {
                    std::cout << 1 << std::endl;
                }
            }
            if (i - 2 == y) {
                if (j - 2 == y) {
                    std::cout << 2;
                }
                if (j - 1 == y) {
                    std::cout << 2;
                }
                if (j == y) {
                    std::cout << 2;
                }
                if (j + 1 == y) {
                    std::cout << 2;
                }
                if (j + 2 == y) {
                    std::cout << 2 << std::endl;
                }
            }
        }
    }
}
