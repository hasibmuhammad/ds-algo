#include <bits/stdc++.h>

using namespace std;

void selection_sort(int arr[], int n) {
    for(int i = 0; i <= n-2; i++) {
        int minIndex = i;
        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // get here the min index of the array
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n;
    cout << "Get the array size: ";
    cin >> n;
    int arr[n]; // make the array size as it was from the input

    cout << "Provide the array item: ";
    // take the array input from the user
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // sort the array here
    selection_sort(arr, n);

    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
