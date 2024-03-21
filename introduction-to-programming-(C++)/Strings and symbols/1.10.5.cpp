#include <iostream>
#include <string>

int main() {
    int k(0);
    std::string word1, word2;
    std::cin >> word1;
    for (auto c : word1) {
        word2 = c + word2;
    }
    if (word1 == word2) {
        std::cout << "yes";
    }
    else std::cout << "no";
}
