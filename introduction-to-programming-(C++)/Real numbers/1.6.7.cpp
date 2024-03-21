#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int n(0), x(0), n_num(0);
    long long int k(0);
    std::cin >> n;
    while (n != 0) {
        x += n;
        n_num++;
        k += pow(n, 2);
        std::cin >> n;
    }
    double s(0);
    s = sqrt((k - (pow(x, 2)) / n_num) / (n_num - 1));
    std::cout << std::setprecision(11) << std::fixed << s;;
}
