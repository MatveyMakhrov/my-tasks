#include <iostream>
 
int main () {
    int n = 0;
    std::cin >> n;
    int k = 0;
    for (int i = 0; i < n; i += 1){
    int p = 0;
    int v = 0;
    int t = 0;
    std::cin >> p >> v >> t;
    if (p + v + t >= 2) {
        k = k + 1;
    }
 }    
 std::cout << k;
}
