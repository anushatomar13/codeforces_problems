#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    // Initialize the vector to store the order
    vector<int> order;

    // Add the first problem
    order.push_back(1);

    // Add k + 1 elements in descending order
    for (int i = n; i > n - k - 1; --i) {
        order.push_back(i);
    }

    // Add the remaining elements in ascending order
    for (int i = 2; i <= n - k; ++i) {
        order.push_back(i);
    }

    // Print the result for the current test case
    for (int i = 0; i < n; ++i) {
        cout << order[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;

    // Call the solve function for each test case
    while (t--) {
        solve();
    }

    return 0;
}
