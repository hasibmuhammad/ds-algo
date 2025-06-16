#include <bits/stdc++.h>

using namespace std;

void printDiv(int n) {
    vector<int> list;

    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            list.push_back(i);
            if((n / i) != i) {
                list.push_back(n/i);
            }
        }
        
    }
    sort(list.begin(), list.end());
    for(auto it : list) {
        cout << it << " ";
    }
}

int main() {
    printDiv(36);
}