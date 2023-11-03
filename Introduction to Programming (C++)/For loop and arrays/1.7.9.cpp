#include <iostream>
#include <vector>

int main() {
    int n(0);
    std::cin >> n;
    std::vector<int> str(n);
    for (int i(0); i < n; i++) {
        std::cin >> str[i];
    }
    int len = str.size();
    if (len % 2 == 0) {
        for (int i(1); i < n; i += 2) {
            int k = str[i];
            str[i] = str[i - 1];
            str[i - 1] = k;
        }
    }
    else {
        for (int i(1); i < n - 1; i += 2) {
            int k = str[i];
            str[i] = str[i - 1];
            str[i - 1] = k;
        }
    }
    for (int i(0); i < n; i++) {
        std::cout << str[i] << " ";
    }
}
