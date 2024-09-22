#include <iostream>
#include <iomanip>

using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

    bool isLeapYear(int year) const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    bool isValidDate(int d, int m, int y) const {
        if (y < 1 || m < 1 || m > 12 || d < 1) {
            return false;
        }

        int daysInMonth;
        switch (m) {
            case 2:
                daysInMonth = isLeapYear(y) ? 29 : 28;
                break;
            case 4: case 6: case 9: case 11:
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31;
        }

        return d <= daysInMonth;
    }

public:
    Date() : day(1), month(1), year(2000) {} // Default constructor

    void setDay(int d) {
        if (isValidDate(d, month, year)) {
            day = d;
        } else {
            cout << "Invalid day for the current month and year." << endl;
        }
    }

    void setMonth(int m) {
        if (isValidDate(day, m, year)) {
            month = m;
        } else {
            cout << "Invalid month for the current day and year." << endl;
        }
    }

    void setYear(int y) {
        if (isValidDate(day, month, y)) {
            year = y;
        } else {
            cout << "Invalid year for the current day and month." << endl;
        }
    }

    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    void display() const {
        cout << "Date: " << setfill('0') << setw(2) << day << "/" 
             << setw(2) << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    
    // Set valid date
    date.setDay(29);
    date.setMonth(2);
    date.setYear(2020); // Leap year
    date.display();

    // Attempt to set an invalid date
    date.setDay(30);
    date.setMonth(2);
    date.setYear(2021); // Invalid as 2021 is not a leap year
    date.display();

    // Set a valid date
    date.setDay(31);
    date.setMonth(1);
    date.setYear(2021);
    date.display();

    return 0;
}
