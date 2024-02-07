#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int ID;
    double *grades;
    int numGrades;
public:
    Student(const std::string& studentName, int studentID, int maxGrades) : name(studentName), ID(studentID), numGrades(0) {
        grades = new double[maxGrades];
    }

    ~Student() {
        delete[] grades;
    }

    void addGrade(double grade) {
        grades[numGrades++] = grade;
    }

    double calculateAverageGrade() const {
        if (numGrades == 0)
            return 0.0;
        
        double sum = 0.0;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }
        return sum / numGrades;
    }

    void displayInformation() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Grades: ";
        for (int i = 0; i < numGrades; ++i) {
            std::cout << grades[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average Grade: " << calculateAverageGrade() << std::endl;
    }
};

int main() {
    Student student("John Doe", 123456, 5);

    student.addGrade(85.0);
    student.addGrade(90.0);
    student.addGrade(75.0);

    student.displayInformation();

    return 0;
}
