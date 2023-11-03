#include <iostream>
#include <vector>

int main() {
    int n(0);
    std::cin >> n;
    std::vector<int> str(n);
    std::vector<int> num_unique;
    for (int i(0); i < n; i++) {
        std::cin >> str[i];
    }
    num_unique.push_back(str[0]);
    for (int i(1); i < n; i++) {
        if (str[i - 1] != str[i]) {
            num_unique.push_back(str[i]);
        }
    }
    int len = num_unique.size();
    std::cout << len;
}
