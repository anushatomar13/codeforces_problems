#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> sumAndId;

    for (int i = 1; i <= n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // Calculate the sum of scores for each student
        int sum = a + b + c + d;

        // Store the pair (sum, student id) in the vector
        sumAndId.push_back({sum, i});
    }

    // Sorting the vector of pairs in descending order based on the sum
    sort(sumAndId.rbegin(), sumAndId.rend());

    // Finding the rank of Thomas Smith
    int rank = 1;
    for (int k = 1; k < n; k++) {
        if (sumAndId[k].first != sumAndId[k - 1].first) {
            rank++;
        } else if (sumAndId[k].second < sumAndId[k - 1].second) {
            rank++;
        }
    }

    // Outputting the rank of Thomas Smith
    cout << rank << endl;

    return 0;
}
