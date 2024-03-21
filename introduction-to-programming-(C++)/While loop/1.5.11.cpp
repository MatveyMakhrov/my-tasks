#include <iostream>

int main() {
    int A(0), N(1), num_null(0), num_first(1), k(0);
    std::cin >> A;
    while (k != A && k <= A) {
        k = num_null + num_first;
        num_null = num_first;
        num_first = k;
        N++;
    }
    if (k == A) {
        std::cout << N;
    }
    else std::cout << -1;
}
