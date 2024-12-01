#include <iostream>
using namespace std;
class Shape {
protected:
    double length;
    double width;

public:
    void inputDimensions() {
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter width of the rectangle: ";
        cin >> width;
    }
};
class Rectangle : public Shape {
public:
    double calculateArea() {
        return length * width;
    }

    void displayArea() {
        cout << "Area of the rectangle: " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;

    rect.inputDimensions();  
    rect.displayArea();     

    return 0;
}

