#include <iostream>
#include <cmath>

bool IsPrime(int n) {
    int k(2);
    while (k <= sqrt(n)) {
        if (n % k == 0) {
            return false;
            break;
        }
        else k++;
    }
    if (k + 1 > sqrt(n)) {
        return true;
    }
}

int main() {
    int n(0);
    std::cin >> n;
    if (IsPrime(n)) {
        std::cout << "YES";
    }
    else std::cout << "NO";
}
