#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n(0);
    std::cin >> n;
    std::vector<int> numbers(n);
    std::vector<int> numbers_odd;
    for (int i(0); i < n; i++) {
        std::cin >> numbers[i];
    }
    for (int i(0); i < n; i++) {
        if (abs(numbers[i]) % 2 == 1) {
            numbers_odd.push_back(numbers[i]);
        }
    }
    std::sort(numbers_odd.begin(), numbers_odd.end());
    if (numbers_odd.empty() == true) {
        std::cout << 0;
    }
    else std::cout << numbers_odd[0];
}
