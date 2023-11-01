#include <iostream>

int main() {
    int N(0), i(2), number_even(0), number_odd(1), number(0);
    std::cin >> N;
    while (i <= N) {
            number = number_even + number_odd;
            number_even = number_odd;
            number_odd = number;
        i++;
    }
    if (N == 0) {
        std::cout << 0;
    }
    if (N == 1) {
        std::cout << 1;
    }
    if (N > 1) {
        std::cout << number;
    }
}
