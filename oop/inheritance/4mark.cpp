#include <iostream>
#include <string>
using namespace std;


class PersonalDetails {
protected:
    string name;
    int rollNumber;

public:
    void inputPersonalDetails() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayPersonalDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
class Marks {
protected:
    float subject1, subject2, subject3;

public:
    void inputMarks() {
        cout << "Enter marks for Subject 1: ";
        cin >> subject1;
        cout << "Enter marks for Subject 2: ";
        cin >> subject2;
        cout << "Enter marks for Subject 3: ";
        cin >> subject3;
    }

    void displayMarks() {
        cout << "Marks:" << endl;
        cout << "  Subject 1: " << subject1 << endl;
        cout << "  Subject 2: " << subject2 << endl;
        cout << "  Subject 3: " << subject3 << endl;
    }

    float calculateTotal() {
        return subject1 + subject2 + subject3;
    }

    float calculatePercentage() {
        return calculateTotal() / 3;
    }
};
class MarkSheet : public PersonalDetails, public Marks {
public:
    void displayMarkSheet() {
        cout << "\n--- Student Mark Sheet ---" << endl;
        displayPersonalDetails();
        displayMarks();
        cout << "Total Marks: " << calculateTotal() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }
};

int main() {
    MarkSheet student;

    student.inputPersonalDetails();  
    student.inputMarks();           
    student.displayMarkSheet();     

    return 0;
}

