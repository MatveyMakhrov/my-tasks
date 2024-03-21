#include <iostream>
#include <cmath>

bool IsPointInArea(double x, double y) {
    return (pow((x + 1), 2) + pow((y - 1), 2) <= 4) && (x + y >= 0) && (-2 * x + y >= 2)
        || (pow((x + 1), 2) + pow((y - 1), 2) >= 4) && (x + y <= 0) && (-2 * x + y <= 2);
}

int main() {
    double x, y;
    std::cin >> x >> y;
    if (IsPointInArea(x, y)) {
        std::cout << "YES";
    }
    else std::cout << "NO";
}
