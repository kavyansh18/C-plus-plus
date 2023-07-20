#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as the pivot
    int i = low - 1;  // Index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);  // Swap elements at i and j
        }
    }
    swap(arr[i + 1], arr[high]);  // Swap the pivot element with the element at (i + 1)
    return (i + 1);  // Return the partition index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Partition the array and get the partition index
        int pi = partition(arr, low, high);

        // Recursively sort the sub-arrays before and after the partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
