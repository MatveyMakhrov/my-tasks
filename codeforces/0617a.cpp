#include <iostream>
 
int main () {
    int x = 0;
    std::cin >> x;
    int w = 0;
    if (x % 5 == 0) {
        w = x / 5;
        std::cout << w;
    } else {
        w = x / 5 + 1;
        std::cout << w;
    }
}
