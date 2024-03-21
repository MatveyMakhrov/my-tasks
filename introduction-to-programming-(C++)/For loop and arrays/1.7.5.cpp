#include <iostream>
#include <vector>

int main() {
    int n(0);
    std::cin >> n;
    std::vector <int> vect(n + 1);
    for (int i = 0; i < n; i++) {
        std::cin >> vect[i];
    }
    for (int i = 0; i < n; i++) {
        if (vect[i] < 0 && vect[i + 1] < 0) {
            if (vect[i] <= vect[i + 1]) {
                std::cout << vect[i] << " " << vect[i + 1];
            }
            else std::cout << vect[i + 1] << " " << vect[i];
            break;
        }
        if (vect[i] > 0 && vect[i + 1] > 0) {
            if (vect[i] >= vect[i + 1]) {
                std::cout << vect[i + 1] << " " << vect[i];
            }
            else std::cout << vect[i] << " " << vect[i + 1];
            break;
        }
    }
}
