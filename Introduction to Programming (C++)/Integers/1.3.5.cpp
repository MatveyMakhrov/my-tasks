#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	cout << n % 100000 % 10000 % 1000 % 100 / 10;
	return 0;
}
