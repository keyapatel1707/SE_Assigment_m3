#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double area() const {
        return length * width;
    }
    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rectangle;
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    rectangle.setDimensions(length, width);
    cout << "Area of the rectangle: " << rectangle.area() << endl;
    cout << "Perimeter of the rectangle: " << rectangle.perimeter() << endl;

    return 0;
}

