#include <iostream>

int main() {
    int N(0), M(0), K(0);
    std::cin >> N >> M >> K;
    if ((N * M > K) && (K % N == 0 || K % M == 0)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    return 0;
}
