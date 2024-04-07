#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int a(0), b(0), c(0), d(0), step(0);
    std::cin >> a >> b >> c >> d;

    double total = a + b + c + d;
    double avg = total / 4;

    if (std::fmod(total, 4) != 0) {
        std::cout << -1;
        return 0;
    }
    std::vector<double> diff = { a - avg, b - avg, c - avg, d - avg };

    for (int i = 0; i < diff.size(); ++i) {
        for (int j = i + 1; j < diff.size(); ++j) {
            if (diff[i] * diff[j] < 0) {
                double transfer = std::min(std::fabs(diff[i]), std::fabs(diff[j]));
                diff[i] += transfer;
                diff[j] -= transfer;
                step += 1;
            }
        }
    }

    std::cout << step;
    return 0;
}