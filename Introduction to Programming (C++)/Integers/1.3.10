#include <iostream>

using namespace std;
int main() {
	int a, h, m, s, b;
	cin >> a; //Вводим кол-во секунд
	b = a % 86400; // кол-во часов после суток
	h = (a % 86400) / 3600; // кол-во часов
	cout << h << ":";
	m = (b - h * 3600) / 60; // кол-во минут
	cout << m / 10 << m % 10 << ":";
	s = (b - h * 3600) % 60; // кол-во секунд
	cout << s / 10 << s % 10;
	return 0;
}
