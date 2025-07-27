#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // the unordered map like this =  string, vector => "key" : {value, value}
    unordered_map<string, vector<string>> anagrams;
    for(auto& word : strs) {
        int hash[26] = {0};

        for(auto& c : word) {
            hash[c - 'a']++;
        }

        string key = "";
        for(int i = 0; i < 26; i++) {
            // create the key like this: 1#0#0#0#1
            key += to_string(hash[i]) + "#";
        }

        anagrams[key].push_back(word);
    }

    vector<vector<string>> result;
    for(auto& group : anagrams) {
        // adding value to the vector
        result.push_back(group.second);
    }

    return result;
}

int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> grouped = groupAnagrams(strs);

    for (auto group : grouped) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
}