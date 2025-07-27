#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hash;
    for(int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        if(hash.find(diff) != hash.end()) {
            return {hash[diff], i};
        }

        hash[nums[i]] = i;
    }

    return {};
}

int main() {
    vector<int> nums = {1, 4, 3, 4};
    vector<int> result = twoSum(nums, 7);

    for(auto res : result) {
        cout << res << " ";
    }

    twoSum(nums, 7);
    return 0;
}
