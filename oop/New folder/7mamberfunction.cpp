#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
    bool isLeapYear(int y) const {
        return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
    }

public:
    Date(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}
    void setDate(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    
    void getDate() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
    bool isValid() const {
        if (year < 1 || month < 1 || month > 12 || day < 1) 
            return false;

        int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        if (month == 2 && isLeapYear(year))
            daysInMonth[1] = 29;

        return day <= daysInMonth[month - 1];
    }
};

int main() {
    Date date;

    int day, month, year;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;

    
    date.setDate(day, month, year);

    
    date.getDate();


    if (date.isValid()) {
        cout << "The date is valid.\n";
    } else {
        cout << "The date is invalid.\n";
    }

    return 0;
}

