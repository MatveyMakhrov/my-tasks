#include <iostream>
#include <array>
 
using namespace std;
int main() {
	int n = 0, t = 0, x = 0;
	const int max = 201;
	array<bool, max > arr;
	cin >> t;
	while (t > 0) {
		cin >> n >> x;
		for (int i = 1; i <= n + x; i++) {
			arr[i] = false;
		}
		for (int i = 0; i < n; i++) {
			int a(0);
			cin >> a;
			arr[a] = true;
		}
		for (int i = n + x; i > 0; i--) {
			int w = 0;
			for (int j = 1; j <= i; j++) {
				if (arr[j] == false) {
					w = w + 1;
				}
			}
			if (w <= x) {
				cout << i << endl;
				break;
			}
		}
		t--;
	}
}
