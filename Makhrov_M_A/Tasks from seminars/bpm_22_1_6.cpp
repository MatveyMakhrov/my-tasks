#include <iostream>
#include <array>

int main()
{
    int h(0), w(0), x(0), y(0);
    std::cin >> h >> w >> x >> y;
    for (int i = 1; i <= h; i += 1) {
        for (int j = 1; j <= w; j += 1) {
            if (std::abs(x - j) == std::abs(y - i)) {
                std::cout << ((std::abs(x - j) + std::abs(y - i)) / 2) << ' ';
            }
            else if (i == y && j == x) {
                std::cout << 0 << ' ';
            }
            else if (i == y && j != x) {
                std::cout << std::abs(x - j) << ' ';
            }
            else if (j == x && i != y) {
                std::cout << std::abs(y - i) << ' ';
            }
            else {
                std::cout << std::max(std::abs(j - x), std::abs(i - y)) << ' ';
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
