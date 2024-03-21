#include <iostream>
#include <cmath>

int main() {
    int n(0);
    double x(0), a(0), sum(0);
    std::cin >> n >> x;
    std::cin >> a;
    sum = a * pow(x, n);
    while (n - 1 >= 0) {
        std::cin >> a;
        sum += a * pow(x, n - 1);
        n--;
    }
    std::cout << sum;;
}
