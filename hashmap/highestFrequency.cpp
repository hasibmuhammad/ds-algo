#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int arr[n];

    // taking inputs -> n times
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre calculate here the numbers
    map<int, int> mpp;
    for(int i = 0 ; i < n; i++) {
        mpp[arr[i]]++;
    }

    // traverse the map
    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    // taking the queries that we want to check:
    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        // fetch here
        cout << mpp[number] << " ";
    }

    return 0;
}