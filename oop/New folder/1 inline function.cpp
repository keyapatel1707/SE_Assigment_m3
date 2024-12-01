#include <iostream>
using namespace std;

class Calculator {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }
    inline int cube(int x) {
        return x * x * x;
    }
};

int main() {
    Calculator calc;
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    cout << "Multiplication of " << num1 << " and " << num2 << " is: " << calc.multiply(num1, num2) << endl;

    int num;
    cout << "Enter a number to find its cube: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << calc.cube(num) << endl;

    return 0;
}

