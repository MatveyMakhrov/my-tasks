#include <iostream>

int main() {
    int n(0), m(0);
    std::cin >> n >> m;
    int a[100][100];
    for (int i(0); i < n; i++) {
        for (int j(0); j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    int max_i = a[0][0];
    for (int i(0); i < n; i++) {
        for (int j(0); j < m; j++) {
            int num = a[i][j];
            if (num > max_i) {
                max_i = num;
            }
        }
    }
    for (int i(0); i < n; i++) {
        for (int j(0); j < m; j++) {
            if (a[i][j] == max_i) {
                std::cout << i << " " << j;
                return 0;
            }
        }
    }
}
