#include <iostream>
#include <vector>

int main() {
    int n(0), k(0);
    std::cin >> n;
    std::vector <int> vect(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vect[i];
        if (vect[i] > 0) {
            k++;
        }
    }
    std::cout << k;
}
