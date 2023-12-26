#include <iostream>

using namespace std;

pair<int, int> findIntegers(int x) {
    for (int a = 1; a <= x; ++a) {
        for (int b = 1; b <= x; ++b) {
            if (a % b == 0 && a * b > x && a / b < x) {
                return {a, b};
            }
        }
    }
    return {-1, -1};
}

int main() {
 
    int x;
    cin >> x;

    pair<int, int> result = findIntegers(x);
    if (result.first == -1) {
        cout << -1 << endl;
    } else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
