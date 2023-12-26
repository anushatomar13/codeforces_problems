#include <bits/stdc++.h>
using namespace std;

int main() {
    //1332
    //4
    //1233
    //cnt=4
    //
    vector<int> nums;
    int n;
    
    cin >> n; // Input the size of the vector
    
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    int cnt = n; // Initialize cnt after n is assigned the size of nums

    for (int i = 1; i < n; i++) {
        if (nums[i - 1] == nums[i] || nums[i - 1] == 0) {
            cnt--;
        }
    }

    cout << cnt;

    return 0;
}
