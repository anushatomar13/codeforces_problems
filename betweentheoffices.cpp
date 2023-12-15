#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string officeSequence;
    cin >> officeSequence;

    int seattleToSF = 0; // Count of flights from Seattle to San Francisco
    int sfToSeattle = 0; // Count of flights from San Francisco to Seattle

    for (int i = 1; i < n; ++i) {
        if (officeSequence[i - 1] == 'S' && officeSequence[i] == 'F') {
            seattleToSF++;
        } else if (officeSequence[i - 1] == 'F' && officeSequence[i] == 'S') {
            sfToSeattle++;
        }
    }

    if (seattleToSF > sfToSeattle) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
