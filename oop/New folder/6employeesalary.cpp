#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {}
    void setSalary(double performanceRating) {
        if (performanceRating >= 4) {
            salary += salary * 20; 
        } else if (performanceRating >= 3) {
            salary += salary * 10; 
        } else if (performanceRating >= 2) {
            salary += salary * 5; 
        } else {
            cout << "No salary increment .\n";
        }
    }
    void display() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("keya", 12345, 50000);
    cout << "Initial Employee Details:\n";
    emp.display();
    double performanceRating;
    cout << "\nEnter performance rating : ";
    cin >> performanceRating;
    emp.setSalary(performanceRating);

    cout << "\nUpdated Employee Details:\n";
    emp.display();

    return 0;
}



