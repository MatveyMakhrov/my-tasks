#include <iostream>
#include <set>

int main() {
    int N(0);
    std::cin >> N;
    std::set<int> s;
    for (int i(0); i < N; i++) {
        int x(0);
        std::cin >> x;
        s.insert(x);
    }
    std::cout << s.size();
}
