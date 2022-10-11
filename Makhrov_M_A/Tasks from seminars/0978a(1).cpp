#include <iostream>
#include <array>
 
int main () {
    int n = 0;
    std::cin >> n;
    const int nmax = 50;
    std::array<int, nmax> arr{ 0 };
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::array<int, nmax> arr1{ 0 };
    for (int i = 0; i < n; i++) {
        bool f = true;
        for (int j = 0; j < n; j++) {
            if (arr[n - i - 1] == arr1[j]) {
                f = false;
                break;
            }
        }
        if (f) {
            arr1[i] = arr[n - i - 1];
        }
    }
    int n1 = arr1.size();
    int c = 0;
    for (int i = 0; i < n1; i++) {
        if (arr1[i] != 0) {
            c++;
        }
    }
    std::cout << c << std::endl;
    for (int i = 0; i < n1; i++) {
        if (arr1[n1 - 1 - i] != 0) {
            std::cout << arr1[n1 - 1 - i] << " ";
        }
    }
}
