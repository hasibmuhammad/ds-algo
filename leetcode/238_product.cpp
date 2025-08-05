#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int left[nums.size()];
    int right[nums.size() - 1];

    left[0] = 1;
    for(int i = 1; i < nums.size(); i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[nums.size() - 1] = 1;
    for(int i =  nums.size() - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    int answer[nums.size() - 1];
    for(int i = 0; i < nums.size(); i++) {
        answer[i] = left[i] * right[i];
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << left[i] << " ";
    }

    cout << endl;
    
    for(int i = 0; i < nums.size(); i++) {
        cout << right[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < nums.size(); i++) {
        cout << answer[i] << " ";
    }


    return {};
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);
    return 0;
}