#include <iostream>
using namespace std;

// Function to perform Dutch National Flag (DNF) sort
void dnfSort(int arr[], int n) {
    int low = 0;       // Index for the low boundary of the current range
    int mid = 0;       // Index for the middle boundary of the current range
    int high = n - 1;  // Index for the high boundary of the current range

    while (mid <= high) {
        if (arr[mid] == 0) {
            // If the current element is 0, swap it with the element at the low boundary
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            // If the current element is 1, no swap is required, move to the next element
            mid++;
        } else {
            // If the current element is 2, swap it with the element at the high boundary
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int arr[] = {2, 0, 1, 1, 0, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    dnfSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
