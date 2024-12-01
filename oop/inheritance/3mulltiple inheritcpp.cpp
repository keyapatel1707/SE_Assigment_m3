#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void inputPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : virtual public Person {
protected:
    float percentage;

public:
    void inputStudentData() {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage  << endl;
    }
};
class Teacher : virtual public Person {
protected:
    float salary;

public:
    void inputTeacherData() {
        inputPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        displayPersonData();
        cout << "Salary: " << salary << endl;
    }
};
class StudentTeacher : public Student, public Teacher {
public:
    void inputStudentTeacherData() {
        cout << "Enter Student-Teacher details:" << endl;
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cout << "Enter salary: ";
        cin >> salary;      
    }

    void displayStudentTeacherData() {
        cout << "\nStudent-Teacher details:" << endl;
        displayPersonData();
        cout << "Percentage: " << percentage << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    StudentTeacher st;

    st.inputStudentTeacherData();  
    st.displayStudentTeacherData();  

    return 0;
}

