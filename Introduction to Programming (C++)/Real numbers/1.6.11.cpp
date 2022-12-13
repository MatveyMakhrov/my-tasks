#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d, e, f, x, y;
    std::cin >> a >> b >> c >> d >> e >> f;
    x = (b * f - d * e) / (b * c - a * d);
    y = (c * e - a * f) / (b * c - a * d);
    std::cout << x << " " << y;
}
