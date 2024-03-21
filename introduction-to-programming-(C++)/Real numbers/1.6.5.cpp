#include <iostream>

int main() {
    int P(0), X(0), Y(0), k(0), n(0);
    int x1(0), y1(0), x_whole(0);
    std::cin >> P >> X >> Y >> k;
    x_whole = X * 100 + Y;
    int sum(0);
    while (n != k) {
        sum += (x_whole + sum) * P / 100;
        n++;
    }
    int sum_com = x_whole + sum;
    std::cout << sum_com / 100 << " " << sum_com % 100;
}
