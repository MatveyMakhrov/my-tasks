#include <iostream>
#include <string>

int main() {
    int k(0);
    std::string word;
    std::getline(std::cin, word);
    for (auto c : word) {
        if (c == ' ') {
            k++;
        }
    }
    std::cout << k + 1;
}
