#include <iostream>

int main() {
    int n(0), number_1(0), k(1), k_max(1);
    std::cin >> n;
    number_1 = n;
    while (n != 0) {
        std::cin >> n;
        if (number_1 == n) {
            k++;
            if (k >= k_max) {
                k_max = k;
            }
        }
        else {
            number_1 = n;
            k = 1;
        }
    }
    std::cout << k_max;
}
