#include <iostream>
#include <vector>

int main() {
    int n(0), back(0);
    std::cin >> n;
    std::vector <int> vect(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vect[i];
    }
    back = vect[0];
    for (int i = 0; i < n; i++) {
        if (vect[i] > back) {
            std::cout << vect[i] << " ";
        }
        back = vect[i];
    }
}
