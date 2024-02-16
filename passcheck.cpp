#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool isValidPassword(const string& password) {
    if (password.length() < 6 || password.length() > 16)
        return false;

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for (char ch : password) {
        if (islower(ch))
            hasLower = true;
        else if (isupper(ch))
            hasUpper = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (ch == '$' || ch == '#' || ch == '@')
            hasSpecial = true;
    }

    return hasLower && hasUpper && hasDigit && hasSpecial;
}

int main() {
    string password;
    while (true) {
        cout << "Input your password: ";
        getline(cin, password);

        if (isValidPassword(password)) {
            cout << "Valid Password" << endl;
            break;
        } else {
            cout << "Not a Valid Password" << endl;
        }
    }

    return 0;
}
