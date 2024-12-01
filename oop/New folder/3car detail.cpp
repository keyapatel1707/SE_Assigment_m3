#include <iostream>
#include <string>

class Car {
private:
    std::string company;
    std::string model;
    int year;

public:
    void setCompany(const std::string& c) {
        company = c;
    }

    void setModel(const std::string& m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }
    std::string getCompany() const {
        return company;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    Car myCar;
    myCar.setCompany("Toyota");
    myCar.setModel("Camry");
    myCar.setYear(2021);
    std::cout << "Car Company: " << myCar.getCompany() << std::endl;
    std::cout << "Car Model: " << myCar.getModel() << std::endl;
    std::cout << "Car Year: " << myCar.getYear() << std::endl;

    return 0;
}

