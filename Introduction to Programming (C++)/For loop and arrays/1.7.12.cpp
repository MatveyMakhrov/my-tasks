#include <iostream>
#include <vector>

int main() {
    int n(0), k(0);
    std::cin >> n;
    std::vector<int> str(n);
    for (int i(0); i < n; i++) {
        std::cin >> str[i];
    }
    for (int j(0); j < n; j++) {
        int num = str[j];
        for (int i(0); i < n; i++) {
            if (num == str[i]) {
                k++;
            }
        }
        if (k == 1) {
            std::cout << num << " ";
            k = 0;
        }
        else k = 0;
    }
}
