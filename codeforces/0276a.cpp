#include <iostream>
 
int main () {
 int n = 0;
 int k = 0;
 int max = INT_MIN;
 std::cin >> n >> k;
 for (int i = 0; i < n; i += 1) {
     int a = 0;
     int fi = 0;
     int ti = 0;
     std::cin >> fi >> ti;
     if (ti > k) {
         a = fi - (ti - k);
     } else {
         a = fi;
     }
     if (max < a) {
      max = a;   
     }
 }
 std::cout << max;
}
