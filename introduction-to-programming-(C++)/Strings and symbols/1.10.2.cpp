#include <iostream>
#include <string>

int main() {
    std::string word1, word2;
    std::cin >> word1;
    if (word1[0] >= 'a'&& word1[0] <= 'z') {
        int al_num = word1[0] - 'a';
        word2 += 'A' + al_num;
        std::cout << word2[0];
    }
    else std::cout << word1[0];
}
