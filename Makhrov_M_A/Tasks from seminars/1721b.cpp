#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
	int t(0);
	cin >> t;
	while (t > 0) {
		int n, m, sx, sy, d;
		cin >> n >> m >> sx >> sy >> d;
		if (min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d) {
			cout << -1 << endl;
		}
		else {
			cout << m + n - 2 << endl;
		}
		t--;
	}
}
