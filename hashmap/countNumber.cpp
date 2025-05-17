#include <bits/stdc++.h>
using namespace std;
int hashs[100000000];

int main() {
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // pre-computation
    for(int i = 0; i < n; i++) {
        hashs[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;

        cout << hashs[number] << endl;
    }
}