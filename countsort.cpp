#include <iostream>
#include <vector>

using namespace std;

void countSort(vector<int>& arr) {
    int maxElement = *max_element(arr.begin(), arr.end());

    // Create a count array to store the count of each element
    vector<int> count(maxElement + 1, 0);

    // Calculate the count of each element in the input array
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
    }

    // Calculate the cumulative count
    for (int i = 1; i <= maxElement; i++) {
        count[i] += count[i - 1];
    }

    // Create a temporary array to store the sorted output
    vector<int> sortedArr(arr.size());

    // Place the elements in the sorted order
    for (int i = arr.size() - 1; i >= 0; i--) {
        sortedArr[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // Copy the sorted elements back to the original array
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = sortedArr[i];
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    countSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

