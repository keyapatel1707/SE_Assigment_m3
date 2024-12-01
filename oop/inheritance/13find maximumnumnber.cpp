#include <iostream>
using namespace std;

class Numbers {
private:
    int num1, num2;

public:
    
	    Numbers(int a, int b) : num1(a), num2(b) {}
    friend int findMax(const Numbers&);
    void display() const {
        cout << "num1: " << num1 << ", num2: " << num2 << endl;
    }
};
int findMax(const Numbers& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    Numbers nums(10, 20);

    cout << "The numbers are: ";
    nums.display();
    int maxNumber = findMax(nums);

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}

