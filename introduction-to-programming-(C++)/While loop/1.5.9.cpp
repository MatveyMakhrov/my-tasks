#include<iostream>

int main() {
    int num, max(0), maxmin(0);
    std::cin >> num;
    while (num != 0) {
        if (num >= max) {
            maxmin = max;
            max = num;
        }
        if (num < max && num > maxmin) {
            maxmin = num;
        }
        std::cin >> num;
    }
    std::cout << maxmin;
}
