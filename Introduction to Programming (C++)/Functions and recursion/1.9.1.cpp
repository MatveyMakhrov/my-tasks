#include <iostream>

int min(int a, int b) {
    if (a >= b) {
        return b;
    }
    else return a;
}

int min4(int a, int b, int c, int d) {
    if (min(a, b) >= min(c, d)) {
        return min(c, d);
    }
    else return min(a, b);
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    std::cout << min4(a, b, c, d);
}
