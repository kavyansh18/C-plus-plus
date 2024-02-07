#include <iostream>
using namespace std;

int main() {
    double marks;

    cout << "Enter marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass\n";

        if (marks >= 85) {
            cout << "Letter Grade: E (Excellent)";
        } else if (marks >= 75) {
            cout << "Letter Grade: O (Outstanding)";
        } else if (marks >= 65) {
            cout << "Letter Grade: G (Good)";
        } else {
            cout << "Letter Grade: S (Satisfactory)";
        }
    } else {
        cout << "Fail\n";

        if (marks >= 33) {
            cout << "Resit in exam";
        } else {
            cout << "Redo course";
        }
    }

    return 0;
}
