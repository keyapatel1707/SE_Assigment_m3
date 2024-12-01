#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base class c." << endl;
    }
};
class Intermediate : public Base {
public:
    Intermediate() {
        cout << "Intermediate ." << endl;
    }
};
class Derived : public Intermediate {
public:
    Derived() {
        cout << "Derived " << endl;
    }
};

int main() {
    cout << "Creating an" << endl;
    Derived obj;

    return 0;
}

