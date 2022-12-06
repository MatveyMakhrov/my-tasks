#include <iostream>
#include <cmath>

int main() {
    double a, b, c, x1, x2, d;
    std::cin >> a >> b >> c;
    d = pow(b, 2) - 4 * a * c;
    if (a != 0) {
        if (d < 0) {
            std::cout << 0;
        }
        else if (d == 0) {
            x1 = (0 - b) / (2 * a);
            std::cout << 1 << " " << x1;
        }
        else {
            x1 = ((0 - b) - sqrt(d)) / (2 * a);
            x2 = ((0 - b) + sqrt(d)) / (2 * a);
            if (x1 < x2) {
                std::cout << 2 << " " << x1 << " " << x2;
            }
            else {
                std::cout << 2 << " " << x2 << " " << x1;
            }
        }
    }
    else if (a == 0 && b == 0 && c == 0) {
        std::cout << 3;
    }
    else if (a == 0 && b == 0 && c != 0) {
        std::cout << 0;
    }
    else if (a == 0 && b != 0) {
        x1 = (0 - c) / b;
        std::cout << 1 << " " << x1;
    }
}
