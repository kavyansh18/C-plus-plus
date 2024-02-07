#include <iostream>
#include <string>

class LibrarySystem {
private:
    int rollNumber;
    std::string name;
    int bookCode;

public:
    LibrarySystem(int roll, const std::string& n, int code) : rollNumber(roll), name(n), bookCode(code) {}

    void printDetails() const {
        std::cout << "Student Details:" << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Book Code: " << bookCode << std::endl;
    }
};

int main() {
    int roll, code;
    std::string name;
    
    // Input values for roll number, name, and book code
    std::cin >> roll >> name >> code;

    // Create a LibrarySystem object with the provided values
    LibrarySystem student(roll, name, code);

    // Print the details of the student and book
    student.printDetails();

    return 0;
}
