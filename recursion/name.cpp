#include <bits/stdc++.h>
using namespace std;
void printName(int n) {
    if(n == 0) {
        return;
    }
    cout << "Hasib" << endl;
    printName(n - 1);
}

void print1ToN(int start, int n) {
    if( start > n) {
        return;
    }
    cout << start << " ";
    print1ToN(start + 1, n);
}

void printNto1(int n) {
    if(n == 0) {
        return;
    }
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    printName(5);
    // print1ToN(1, 10);
    // printNto1(10);
    return 0;
}