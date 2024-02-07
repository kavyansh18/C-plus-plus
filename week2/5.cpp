#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter values for the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Values in the array are:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
