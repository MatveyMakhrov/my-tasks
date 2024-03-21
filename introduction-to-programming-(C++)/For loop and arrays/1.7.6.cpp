#include <iostream>
#include <vector>

int main() {
    int n(0), min(0);
    std::cin >> n;
    std::vector <int> vect(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vect[i];
    }
    for (int i = 0; i < n; i++) {
        if (vect[i] > 0) {
            min = vect[i];
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (vect[i] < min && vect[i] > 0) {
            min = vect[i];
        }
    }
    std::cout << min;
}
