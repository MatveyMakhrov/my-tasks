#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double x, eps, s, a;
    std::cin >> x >> eps;
    for (int i = 1; x <= 1.01; i++) {
            s = pow(-1, i + 1) * (pow(x, 2 * i + 1) / (4 * pow(i, 2) - 1));
        std::cout << std::fixed << std::setprecision(4);
        std::cout << x << " " << a << std::endl;
        x = x + 0.05;
    }
}
