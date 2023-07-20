#include <iostream>
using namespace std;

// Function to merge two sorted subarrays and count inversions
int mergeAndCount(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;    // Size of the left subarray
    int n2 = r - mid;        // Size of the right subarray

    int left[n1];            // Temporary array to store elements of the left subarray
    int right[n2];           // Temporary array to store elements of the right subarray

    // Copy elements from the main array to the temporary arrays
    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int inversions = 0;      // Variable to store the count of inversions
    int i = 0, j = 0, k = l; // Pointers for merging the subarrays and updating the main array

    // Merge the two subarrays in sorted order and count inversions
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
            inversions += n1 - i;  // Count inversions when an element from the right subarray is picked
        }
        k++;
    }

    // Copy the remaining elements of the left subarray, if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy the remaining elements of the right subarray, if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }

    return inversions;
}

// Function to perform merge sort and count inversions
int mergeSortAndCount(int arr[], int l, int r) {
    int inversions = 0;

    if (l < r) {
        int mid = l + (r - l) / 2;

        // Recursively divide the array into two halves and count inversions
        inversions += mergeSortAndCount(arr, l, mid);
        inversions += mergeSortAndCount(arr, mid + 1, r);

        // Merge the two sorted subarrays and count inversions
        inversions += mergeAndCount(arr, l, mid, r);
    }

    return inversions;
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Count inversions using merge sort
    int inversionCount = mergeSortAndCount(arr, 0, n - 1);

    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Inversion count: " << inversionCount << endl;

    return 0;
}
