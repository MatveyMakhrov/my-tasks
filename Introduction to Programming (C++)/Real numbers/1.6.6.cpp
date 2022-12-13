#include <iostream>
#include <iomanip>

int main() {
    double c, n, k(0), i(0);
    std::cin >> n;
    while (n != 0) {
        i = i + n;
        k++;
        std::cin >> n;
    }
    std::cout << std::fixed << std::setprecision(11) << i / k;
}
