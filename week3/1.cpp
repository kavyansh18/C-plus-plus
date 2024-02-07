#include <iostream>
#include <vector>

void acceptArray(std::vector<int>& arr) {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << (i + 1) << ": ";
        std::cin >> arr[i];
    }
}

void displayArray(const std::vector<int>& arr) {
    for (const auto& element : arr) {
        std::cout << element << " ";
    }
    std::cout << "\n";
}

void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void bubbleSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    std::vector<int> arr(10);
    int choice;

    while (true) {
        std::cout << "\nArray Management System\n"
                  << "1. Accept elements of an array\n"
                  << "2. Display elements of an array\n"
                  << "3. Sort the array using insertion sort method\n"
                  << "4. Sort the array using selection sort method\n"
                  << "5. Sort the array using bubble sort method\n"
                  << "6. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                acceptArray(arr);
                break;
            case 2:
                displayArray(arr);
                break;
            case 3:
                insertionSort(arr);
                break;
            case 4:
                selectionSort(arr);
                break;
            case 5:
                bubbleSort(arr);
                break;
            case 6:
                exit(0);
            default:
                std::cerr << "Error: Invalid choice.\n";
                break;
        }
    }

    return 0;
}