#include <iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }
    double area() const {
        return 3.14159 * radius * radius;
    }
    double circumference() const {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    Circle circle;
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;
    circle.setRadius(r);
    cout << "Area of the circle: " << circle.area() << endl;
    cout << "Circumference of the circle: " << circle.circumference() << endl;
}

