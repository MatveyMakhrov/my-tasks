#include <iostream>

int main() {
    int n(0), k(0), n_1(0), n_2(0);
    std::cin >> n;
    n_1 = n;
    std::cin >> n;
    n_2 = n;
    while (n != 0) {
        std::cin >> n;
        if (n_1 < n_2 && n_2 > n && n > 0) {
            k++;
        }
        n_1 = n_2;
        n_2 = n;
    }
    std::cout << k;
}
