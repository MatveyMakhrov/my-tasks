#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	int n = 0, result = 0;
	cin >> n;
	
	vector<int> vect;
	vect.reserve(50);
	for (int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		vect.push_back(a);
	}
	for (int i = vect.size() - 1; i >= 0; i--) {
		int a = vect[i];
		if (a != 0) {
			for (int j = i - 1; j >= 0; j--) {
				if (vect[j] == a) {
					vect[j] = 0;
				}
			}
			result += 1;
		}
	}
	cout << result << endl;
	for (int i = 0; i < n; i++) {
		if (vect[i] != 0) {
			cout << vect[i] << " ";
		}
	}
}
