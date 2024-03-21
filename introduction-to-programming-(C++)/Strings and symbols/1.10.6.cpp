#include <iostream>
#include <string>

int main() {
    int k(0);
    std::string word1, word2, word3;
    std::getline(std::cin, word1);
    word1 = word1 + " "; 
    int len = word1.size();
    for (int i(0); i < len; i++) {
        if (word1[i] != ' ') {
            word2 += word1[i];
        }
        else break;
    }
    for (auto c : word1) {
        if (c != ' ') {
            word3 += c;
        }
        else {
            if (word3.size() > word2.size()) {
                word2 = "";
                word2 = word3;
                word3 = "";
            }
            else {
                word3 = "";
            }
        }
    }
    std::cout << word2;
}
