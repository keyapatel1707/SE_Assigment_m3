#include <iostream>
using namespace std;

class AreaCalculator {
public:
    
    double area(double length, double breadth) {
        return length * breadth;
    }
    double area(double base, double height, double Triangle) {
        if (Triangle)
		 {
            return 0.5 * base * height;
        }
        return 0; 
    }
    double area(double radius) {
        const double pi = 3.14159;
        return pi * radius * radius;
    }
};

int main() {
    AreaCalculator calc;
    double rectLength = 5, rectBreadth = 3;
    cout << "Area of Rectangle: " << calc.area(rectLength, rectBreadth) << endl;

    // Triangle
    double triBase = 4, triHeight = 2;
    cout << "Area of Triangle: " << calc.area(triBase, triHeigh,triagle) << endl;

    // Circle
    double radius = 3;
    cout << "Area of Circle: " << calc.area(radius) << endl;

    return 0;
}

