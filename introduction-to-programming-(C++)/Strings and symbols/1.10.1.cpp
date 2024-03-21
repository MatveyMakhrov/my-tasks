#include <iostream>
#include <string>

int main() {
    std::string s;
    std::cin >> s;
    for (auto i : s) {
        if (i >= '0' && i <= '9') {
            std::cout << "yes";
        }
        else {
            std::cout << "no";
        }
    }
}
