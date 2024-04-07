#include <iostream>
#include <vector>

using namespace std;

vector<int> goodArray(int n) {
    vector<int> arr;
    while (n > 0) {
        arr.push_back(1);
        n -= 1;
        if (n > 0 && (n & (n + 1)) == 0) {
            arr.back() *= 2;
            break;
        }
    }
    if (n == 0) {
        return arr;
    }
    else {
        return {};
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> result = goodArray(n);
    if (result.empty()) {
        cout << "-1" << endl;
    }
    else {
        for (int i = 0; i < result.size(); ++i) {
            cout << result[i];
            if (i < result.size() - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
