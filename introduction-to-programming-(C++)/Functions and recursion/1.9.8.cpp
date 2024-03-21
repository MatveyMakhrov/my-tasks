#include <iostream>
#include <cmath>

int MinDivisor(int n) {
    int k(2);
    while (k <= sqrt(n)) {
        if (n % k == 0) {
            return k;
            break;
        }
        else k++;
    }
    if (k + 1 > sqrt(n)) {
        return n;
    }
}

int main() {
    long long int n(0);
    std::cin >> n;
    std::cout << MinDivisor(n);
}
