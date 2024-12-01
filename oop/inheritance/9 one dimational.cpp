#include <iostream>
using namespace std;

class Matrix {
private:
    int arr[5];  

public:
    Matrix() {
        for (int i = 0; i < 5; i++) {
            arr[i] = 0;
        }
    }
    void input() {
        cout << "Enter 5 elements of the matrix:" << endl;
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    Matrix operator+(Matrix m) {
        Matrix temp;  
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = this->arr[i] + m.arr[i];  
        }
        return temp;
    }
};

int main() {
    Matrix m1, m2, result;
    cout << "Matrix 1:" << endl;
    m1.input();
    cout << "Matrix 2:" << endl;
    m2.input();
    cout << "\nMatrix 1: ";
    m1.display();
    cout << "Matrix 2: ";
    m2.display();
    result = m1 + m2;
    cout << "\nResult of Matrix Addition: ";
    result.display();

    return 0;
}

