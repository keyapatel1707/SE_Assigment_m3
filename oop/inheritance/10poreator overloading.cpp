#include <iostream>
#include <string>
using namespace std;

class MyString {
private:
    string value;

public:
    MyString(string val) : value(val) {}
    MyString operator+(const MyString& other) {
        return MyString(value + other.value);
    }
    void display() const {
        cout << value;
    }
};

int main() {
    MyString str1("keya");
    MyString str2(" patel");
    MyString result = str1 + str2;

    cout << "Concatenated String: ";
    result.display();
    cout << endl;

    return 0;
}

