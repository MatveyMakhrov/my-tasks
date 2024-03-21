#include <iostream>

int main() {
    int n(0), k(0);
    std::cin >> n;
    int a[100][100];
    while (k != n) {
        for (int i(0); i < n; i++) {
            for (int j(0); j < n; j++) {
                if (i == j) {
                    a[i][j] = 0;
                }
                else if (i < j - k || i  > j + k) {
                    a[i][j] = k + 1;
                }
            }
        }
        k++;
    }
    for (int i(0); i < n; i++) {
        for (int j(0); j < n; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
