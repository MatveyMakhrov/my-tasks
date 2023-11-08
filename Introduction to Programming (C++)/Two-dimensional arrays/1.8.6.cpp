#include <iostream>

int main() {
    int n(0), k(0), i_k(0), j_k(0);
    std::cin >> n;
    int a[11][11];           
    for (int i(0); i < n; i++) {
        for (int j(0); j < n; j++) {
            std::cin >> a[i][j];
        }
    }
    std::cin >> k;
    if (k > 0) {
        i_k += k;
    }
    else if (k < 0) {
        j_k -= k;
    }
    for (int i(i_k), j(j_k); i < n && j < n; i++, j++) {
        std::cout << a[i][j] << " ";
    }
}
