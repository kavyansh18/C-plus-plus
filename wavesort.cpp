#include <iostream>
using namespace std;

// Function to swap two elements
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to perform wave sort
void waveSort(int arr[], int n) {
    // Traverse all even indexed elements
    for (int i = 0; i < n; i += 2) {
        // If current element is smaller than previous
        if (i > 0 && arr[i] < arr[i - 1])
            swap(arr[i], arr[i - 1]);

        // If current element is smaller than next
        if (i < n - 1 && arr[i] < arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int arr[] = {3, 1, 4, 7, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    waveSort(arr, n);

    cout << "Wave sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
