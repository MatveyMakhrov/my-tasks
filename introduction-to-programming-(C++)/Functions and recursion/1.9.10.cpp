#include <iostream>

double power(double a, int n) {
    if (n == 0) {
        return 1;
    }
    else if (n == 1) {
        return a;
    }
    else {
        if (n % 2 == 0) {
            return power(a * a, n / 2);
        }
        else if (n % 2 == 1) {
            return a * power(a, n - 1);
        }
    }
}

int main() {
    double a;
    int n;
    std::cin >> a >> n;
    std::cout << power(a, n);
}
