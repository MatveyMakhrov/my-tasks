#include <iostream>

int main() {
    int n(0), i(0), k(0);
    std::cin >> n;
    while (n != 0) {
        if (n >= k) {
            k = n;
            if (n == k) {
                i++;
            }
        }
        std::cin >> n;
        if (n > k) {
            i = 0;
        }
    }
    std::cout << i;
}
