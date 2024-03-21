#include <iostream>
#include <vector>

int main() {
    int n(0);
    std::cin >> n;
    std::vector<int> str(n);
    for (int i(0); i < n; i++) {
        std::cin >> str[i];
    }
    int i = str.back();
    str.insert(str.begin(), i);
    for (int i(0); i < n; i++) {
        std::cout << str[i] << " ";
    }
}
