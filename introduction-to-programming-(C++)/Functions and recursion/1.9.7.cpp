#include <iostream>

double power(double a, int n) {
    double sum(1);
    if (n == 0) {
        return 1;
    }
    else  if (n >= 1) {
        int k(1);
        while (k <= n) {
            sum *= a;
            k++;
        }
        return sum;
    }
    else if (n < 0) {
        int k(-1);
        while (k >= n) {
            sum *= a;
            k--;
        }
        return 1 / sum;

    }
}

int main() {
    double a;
    int n;
    std::cin >> a >> n;
    std::cout << power(a, n);
}
