#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, const string &s) {
    if(i >= s.size() / 2) return true;

    if(s[i] != s[s.size() - i - 1]) return false;

    return isPalindrome(i + 1, s);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    
    int result = isPalindrome(0, s);

    if(result == 1) {
        cout << s << " is palindrome.";
    } else {
        cout << s << " is not a palindrome.";
    }
    cout << endl;

}

