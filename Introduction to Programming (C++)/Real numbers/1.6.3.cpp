#include <iostream>
#include <cmath>

int main() {
    double a, b, c, p, s;
    std::cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << s;
}
