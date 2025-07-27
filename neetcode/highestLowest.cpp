#include <bits/stdc++.h>

using namespace std;

int highestFrequency(vector<int> & nums) { 
    map<int, int> hash;
    for(auto num : nums) {
        hash[num]++;
    }

    int freq = 0, item = 0;
    for(auto i : hash) {
        if(i.second >  freq) {
            freq = i.second;
            item = i.first;
        }
    }

    return item;
}


int lowestFrequency(vector<int> & nums) {
    map<int, int> hash;
    for(auto num : nums) {
        hash[num]++;
    }

    int lf = INT_MAX, ans = 0;
    for(auto num : hash) {
        if(num.second < lf) {
            lf = num.second;
            ans = num.first;
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {1,2,2,2,3,4,4,4,4,4};
    int hf = highestFrequency(nums);
    int lf = lowestFrequency(nums);

    cout << "Highest frequency: " << hf << endl;
    cout << "Lowest frequency: " << lf << endl;
    return 0;
}