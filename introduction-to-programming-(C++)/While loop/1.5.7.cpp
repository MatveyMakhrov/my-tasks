#include <iostream>

int main() {
    int N(0), i(0), min(0);
    std::cin >> N;
    min = N;
    while (N != 0) {
        i = N;
        if (i > min) {
            min = i;
        }
        std::cin >> N;
    }
    std::cout << min;
}
