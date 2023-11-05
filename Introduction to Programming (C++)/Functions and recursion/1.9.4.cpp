#include <iostream>
#include <cmath>

bool IsPointInSquare(double x, double y) {
    return std::abs(x) + std::abs(y) <= 1;
}

int main() {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInSquare(x, y)) {
        std::cout << "YES";
    }
    else std::cout << "NO";
}
