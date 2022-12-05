#include <iostream>

int main() {
    int N(0), M(0), X(0), Y(0), s1(0), s2(0);
    std::cin >> N >> M >> X >> Y;
    if (N < M) {
        if (N / 2 - X >= 0) {
            s1 = X;
        }
        else {
            s1 = N - X;
        }
        if (M / 2 - Y >= 0) {
            s2 = Y;
        }
        else {
            s2 = M - Y;
        }
        if (s1 <= s2) {
            std::cout << s1;
        }
        else {
            std::cout << s2;
        }
    }
    else {
        if (N / 2 - Y >= 0) {
            s1 = Y;
        }
        else {
            s1 = N - Y;
        }
        if (M / 2 - X >= 0) {
            s2 = X;
        }
        else {
            s2 = M - X;
        }
        if (s1 <= s2) {
            std::cout << s1;
        }
        else {
            std::cout << s2;
        }
    }
    return 0;
}
