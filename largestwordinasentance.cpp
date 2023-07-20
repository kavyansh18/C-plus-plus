#include <iostream>
using namespace std;

int main() {
    int max = 0;
    int n = 0;
    int i = 0;
    cout << "Enter the data: ";
    char arr[100];
    cin.ignore(); // Ignore any characters in the input buffer
    cin.getline(arr,100); // Read the entire line
    while (arr[i] != '\0') {
        if (arr[i] == ' ') {
            if (n > max) {
                max = n;
            }
            n = 0; // Resetting the word length count
        } else {
            n++;
        }
        i++;
    }
    // Check the length of the last word
    if (n > max) {
        max = n;
    }
    cout << max;
    return 0;
}
