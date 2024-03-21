#include <iostream>

int main() {
    int N(0), i(0), s(1);
    std::cin >> N;
    while (i <= N) {
        if (s * s == i) {
            std::cout << i << " ";
            s++;
        }
        i++;
    }
    return 0;
}
