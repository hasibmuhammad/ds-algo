#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    while( a > 0 && b > 0) {
        if( a > b) a = a % b;
        else b = b % a;
    }
    if( a == 0) return b;
    else return a;
}

int main() {
    cout << gcd(48, 18) << endl; // Should return 6
    cout << gcd(56, 98) << endl; // Should return 14
    cout << gcd(101, 10) << endl; // Should return 1
    return 0;
}