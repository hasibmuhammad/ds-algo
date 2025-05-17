#include <bits/stdc++.h>

using namespace std;


/**
 * Problem statement
 * show the frequency of character which is small case letter
 */

int main() {
    string s;
    cin >> s;

    // pre-calculate here
    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++) {
        // abb -> a - 'a' -> 97 - 97 = 0 => hash[0]++ => a:1
        // abb => b - 'a' => 98 - 97 = 1 => hash[1]++ => b: 2
        // abb => b - 'a' => 98 - 97 = 1 => hash[1]++ => b: 2
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;

        // fetch here
        // a => hash[97 - 97] => hash[0] => 1
        // b => hash[98 - 97] => hash[1] => 2
        cout << hash[ch - 'a'];
    }

    return 0;   
}