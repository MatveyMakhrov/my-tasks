#include <iostream>

int main () {
    int n(0), m(0), i(0), j(0);
    std::cin >> n >> m;
    int a[100][100];
    for (int i(0); i < n; i++) {
        for (int j(0); j < m; j++) {
            std::cin >> a[i][j];
        }
    }
    std::cin >> i >> j;
    for (int i_i(0); i_i < n; i_i++) {
        int k = a[i_i][i];
        a[i_i][i] = a[i_i][j];
        a[i_i][j] = k;
    }
    for (int i(0); i < n; i++) {
        for (int j(0); j < m; j++) {
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
