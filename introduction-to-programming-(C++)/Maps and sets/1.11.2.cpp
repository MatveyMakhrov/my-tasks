#include <iostream>
#include <set>

int main() {
    int N(0), x;
    std::cin >> N;
    std::multiset<int> s;
    for (int i(0); i < N; i++) {
        std::cin >> x;
        if (s.find(x) == s.end()) {
            std::cout << "NO\n";
        }
        else std::cout << "YES\n";
        s.insert(x);
    }
}
