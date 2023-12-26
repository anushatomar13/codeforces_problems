#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = 0;
    int b = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'z') {
            a++;
        }
        if (s[i] == 'n') {
            b++;
        }
    }
    string r1 = "";
    for (int k = 0; k < b; k++) {
        r1 += '1';
    }
    for (int j = 0; j < a; j++) {
        r1 += '0';
    }

    cout << r1;

    return 0;
}
