#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // take the array input
    // 10,5,10,15,10,5
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre calculate here
    int hash[1000000] = {0};
    for(int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        // fetch here
        cout << hash[number] << endl;
    }

    return 0;
}