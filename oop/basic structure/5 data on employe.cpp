#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    void setName(const string& personName) {
        name = personName;
    }
    string getName() const {
        return name;
    }
    void setAge(int personAge) {
        age = personAge;
    }
    int getAge() const {
        return age;
}
    void setCountry(const string& personCountry) {
        country = personCountry;
    }
    string getCountry() const {
        return country;
    }
};

int main() {
    Person person;
    person.setName("keya");
    person.setAge(30);
    person.setCountry("bombay");

    // Get and display the values
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;
    cout << "Country: " << person.getCountry() << endl;

    return 0;
}

