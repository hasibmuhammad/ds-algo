#include <bits/stdc++.h>

using namespace std;

int main() {
    // taking the string as input
    string s;
    cin >> s;

    // pre compute here
    map<char, int> mpp;

    for(int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    // iterate through the map
    for(auto it : mpp) {
        cout << it << " ";
    }

    int q;
    cout << "Enter the query number: ";
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        // fetch here
        cout << mpp[ch] << " ";
    }

    return 0;
}