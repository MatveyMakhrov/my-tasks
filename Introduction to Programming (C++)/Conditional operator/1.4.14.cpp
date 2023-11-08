#include <iostream>

int main() {
    int A1(0), B1(0), C1(0), A2(0), B2(0), C2(0);
    std::cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    if ((A1 == A2 && B1 == B2 && C1 == C2) ||
        (A1 == A2 && B1 == C2 && C1 == B2) ||
        (A1 == C2 && B1 == A2 && C1 == B2) ||
        (A1 == B2 && B1 == A2 && C1 == C2) ||
        (A1 == B2 && B1 == C2 && C1 == A2) ||
        (A1 == C2 && B1 == B2 && C1 == A2)) {
        std::cout << "Boxes are equal";
    }
    else if ((A1 <= A2 && B1 <= B2 && C1 <= C2) ||
        (A1 <= A2 && B1 <= C2 && C1 <= B2) ||
        (A1 <= C2 && B1 <= A2 && C1 <= B2) ||
        (A1 <= B2 && B1 <= A2 && C1 <= C2) ||
        (A1 <= B2 && B1 <= C2 && C1 <= A2) ||
        (A1 <= C2 && B1 <= B2 && C1 <= A2)) {
        std::cout << "The first box is smaller than the second one";
    }
    else if ((A1 >= A2 && B1 >= B2 && C1 >= C2) ||
        (A1 >= A2 && B1 >= C2 && C1 >= B2) ||
        (A1 >= C2 && B1 >= A2 && C1 >= B2) ||
        (A1 >= B2 && B1 >= A2 && C1 >= C2) ||
        (A1 >= B2 && B1 >= C2 && C1 >= A2) ||
        (A1 >= C2 && B1 >= B2 && C1 >= A2)) {
        std::cout << "The first box is larger than the second one";
    }
    else {
        std::cout << "Boxes are incomparable";
    }
}
