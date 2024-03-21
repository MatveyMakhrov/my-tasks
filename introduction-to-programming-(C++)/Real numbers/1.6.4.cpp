#include <iostream>
#include <cmath>

int main() {
    int P(0), X(0), Y(0);
    int x1(0), y1(0), x_whole(0);
    std::cin >> P >> X >> Y;
    x_whole = X * 100 + Y;
    int sum(0);
    sum = x_whole * P / 100;
    int sum_com = x_whole + sum;
    std::cout << sum_com / 100 << " " << sum_com % 100;
}
