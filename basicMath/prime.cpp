#include <bits/stdc++.h>

using namespace std;

bool isPrime(int number) {
    int count = 0;
    for(int i = 1; i * i < number; i++) {
        if(number % i == 0) {
            count++;
            if(number / i != i) {
                count++;
            }
        }
    }

    if(count == 2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    cout << isPrime(7) << endl; // Should return 1 (true)
    return 0;
}