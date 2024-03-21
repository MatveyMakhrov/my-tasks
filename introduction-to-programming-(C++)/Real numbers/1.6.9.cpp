#include <iostream>
#include <cmath>

int main() {
    double a, b, c, x1, d, x2;
    std::cin >> a >> b >> c;
    d = pow(b, 2) - 4 * a * c;
    if (d < 0) {
    }
    else if (d == 0) {
        x1 = (0 - b) / (2 * a);
        std::cout << x1;
    }
    else {
        x1 = ((0 - b) - sqrt(d)) / (2 * a);
        x2 = ((0 - b) + sqrt(d)) / (2 * a);
        if (x1 > x2) {
            std::cout << x2 << " " << x1;
        }
        else {
            std::cout << x1 << " " << x2;
        }
    }
}
