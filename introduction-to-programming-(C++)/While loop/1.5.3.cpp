#include <iostream>

int main() {
    int N(0), i(1), k(1);
    std::cin >> N;
    while (i <= N) {
        if (i % k == 0) {
            std::cout << k << " ";
            k = k * 2;
        }
        i++;
    }
}
