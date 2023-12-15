#include<bits/stdc++.h>
using namespace std;

int no_of_notebooks(int color, int k) {
    int notebooks = 0;
    if (color > k) {
        if (color % k == 0) {
            notebooks = color / k;
        } else {
            notebooks = color/ k+ 1;
        }
    }else{
        notebooks+=1;
    }

    return notebooks;
}

int main() {
    int n, m;
    cin >> n >> m;

    int red_notebooks = no_of_notebooks(n*2, m);
    int green_notebooks = no_of_notebooks(n*5, m);
    int blue_notebooks = no_of_notebooks(n*8, m);

    int total_notebooks = red_notebooks + green_notebooks + blue_notebooks;

    cout << total_notebooks << endl;

    return 0;
}
