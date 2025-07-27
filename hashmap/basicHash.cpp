#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array item: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre fetch or pre compute here:
    int hash[13] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the query number: ";
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        // fetch the hash here
        cout << hash[number] << endl;
    }
    return 0;
}