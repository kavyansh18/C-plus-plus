#include <iostream>
#include <cstring>

using namespace std;

bool palindrome(char arr[]) {
    int n = strlen(arr);
    char arr1[n];
    int k = 0;
    for (int i = n - 1; i >= 0; i--) {
        arr1[k] = arr[i];
        k++;
    }
    arr1[k] = '\0'; // Add null terminator to arr1
    
    if (strcmp(arr, arr1) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char arr[100];
    cout << "ENTER THE WORD TO CHECK AS PALINDROME: ";
    cin >> arr;
    
    bool result = palindrome(arr);
    if (result == true) {
        cout << "YES, IT IS A PALINDROME";
    } else {
        cout << "IT IS NOT A PALINDROME";
    }
    
    return 0;
}
