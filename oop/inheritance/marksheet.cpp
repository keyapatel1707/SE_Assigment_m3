#include <iostream>
using namespace std;
class Student {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Test : public Student {
protected:
    float subject1, subject2;

public:
    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
    }

    void displayMarks() {
        cout << "Marks obtained:" << endl;
        cout << "  Subject 1: " << subject1 << endl;
        cout << "  Subject 2: " << subject2 << endl;
    }
};
class Result : public Test {
private:
    float totalMarks;

public:
    void calculateTotal() {
        totalMarks = subject1 + subject2;
    }

    void displayResult() {
        cout << "\nStudent Result ---" << endl;
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result student;


    student.inputRollNumber();  
    student.inputMarks();     
    student.calculateTotal();
    student.displayResult();

    return 0;
}

