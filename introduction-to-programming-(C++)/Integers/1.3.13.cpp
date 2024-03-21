#include <iostream>

using namespace std;

int main() {
	int a, s1, s2, s3, s4, d, x;
	cin >> a;
	s1 = a / 1000; // тысячи числа
	s2 = (a - s1 * 1000) / 100; // сотни числа
	s3 = ((a - s1 * 1000) - 100 * s2) / 10; // десятки числа
	s4 = a % 10; // единицы числа
	d = (s1 - s4) * (s1 - s4);
	x = (s2 - s3) * (s2 - s3);
	cout << x + d + 1;
	return 0;
}
