#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> sumOfMarks;

    for (int j = 0; j < n; j++) {
        vector<int> marks;

        for (int i = 1; i <= 5; i++) {
            int mark;
            cin >> mark;
            marks.push_back(mark);
        }

        int sum = accumulate(marks.begin(), marks.end(), 0);
        sumOfMarks.push_back(sum);
        cout << endl;
    }

    int maxelement = *max_element(sumOfMarks.begin(), sumOfMarks.end());

    for (int i = 0; i < sumOfMarks.size(); i++) {
        if (sumOfMarks[i] == maxelement) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
