#include <iostream>
#include <string>

int main() {
    int n(0);
    std::cin >> n;
    std::string a[15][15];
    for (int i(0); i < n; i++) {
        for (int j(0); j < n; j++) {
            if (i == j || i == n / 2 || j == n / 2 || i + j == n - 1) {
                a[i][j] = "*";
            }
            else {
                a[i][j] = ".";
            }
        }
    }
    for (int i(0); i < n; i++) {
        for (int j(0); j < n; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
