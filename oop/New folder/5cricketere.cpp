#include <iostream>
#include <string>
using namespace std;
class Cricketer {
protected:
    string name;
    int age;

public:
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }

    void displayCricketerData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Batsman : public Cricketer {
private:
    int totalRuns;
    int bestPerformance;
    float averageRuns;

public:
    void inputData() {
        inputCricketerData();
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
    }

    void calculateAverageRuns(int matches) {
        if (matches > 0) {
            averageRuns = static_cast<float>(totalRuns) / matches;
        } else {
            averageRuns = 0.0;
            cout << "Number of matches " << endl;
        }
    }

    void displayData() {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
        cout << "Average Runs: " << averageRuns << endl;
    }
};

int main() {
    Batsman b;
    int matches;

    b.inputData();
    cout << "Enter the number of matches played: ";
    cin >> matches;

    b.calculateAverageRuns(matches);
    b.displayData();

    return 0;
}

