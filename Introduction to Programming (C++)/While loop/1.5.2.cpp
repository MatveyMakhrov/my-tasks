#include <iostream>

int main() {
    int n(0), i(n), min(0);
    std::cin >> n;
    i = n;
    min = i;
    while (i != 1) {
        if (n % i == 0) {
            if (i < min) {
                min = i;
            }
        }
        i--;
    }
    std::cout << min;
}
