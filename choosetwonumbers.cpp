#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // Iterate over elements in arrays a and b to find a pair whose sum doesn't belong to either array
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int sum = a[i] + b[j];

            // Check if the sum doesn't belong to array a and doesn't belong to array b
            bool sumNotInA = true;
            for (int k = 0; k < n; k++) {
                if (a[k] == sum) {
                    sumNotInA = false;
                    break;
                }
            }

            bool sumNotInB = true;
            for (int k = 0; k < m; k++) {
                if (b[k] == sum) {
                    sumNotInB = false;
                    break;
                }
            }

            // If the sum doesn't belong to either array, print the pair and exit
            if (sumNotInA && sumNotInB) {
                cout << a[i] << " " << b[j] << endl;
                return 0;
            }
        }
    }

    // The answer always exists, so this line won't be reached
    return 0;
}
