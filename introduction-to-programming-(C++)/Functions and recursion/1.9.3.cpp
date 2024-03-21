#include <iostream>

bool IsPointInSquare(double x, double y) {
    return x <= 1 && x >= -1 && y <= 1 && y >= -1;
}

int main() {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInSquare(x, y)) {
        std::cout << "YES";
    }
    else std::cout << "NO";
}
