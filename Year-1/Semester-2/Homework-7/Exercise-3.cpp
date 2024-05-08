#include "iostream"
#include "cmath"

using namespace std;

struct Date {
    int year, month, day;
} date1, date2;

void setDate(Date &date) {

    int year, month, day;

    cout << "[+] Introduce Data (y/m/d): "; cin >> year >> month >> day;

    while (day >= 30) {
        day -= 30;
        month++;
    }

    while (month > 12) {
        month -= 12;
        year++;
    }

    date.year = year;
    date.month = month;
    date.day = day;
}

void getDate() {
    cout << "[~] Data 1 (y/m/d): " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
    cout << "[~] Data 2 (y/m/d): " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
}

void sumDate() {
    int year = date1.year + date2.year;
    int month = date1.month + date2.month;
    int day = date1.day + date2.day;

    while (day >= 30) {
        day -= 30;
        month++;
    }

    while (month >= 12) {
        month -= 12;
        year++;
    }

    cout << "[~] Suma (y/m/d): " << year << "/" << month << "/" << day << "\n";
}

void difDate() {
    int year = date1.year - date2.year;
    int month = date1.month - date2.month;
    int day = date1.day - date2.day;

    cout << "[~] Diferenta (y/m/d): " << abs(year) << "/" << abs(month) << "/" << abs(day) << "\n";
}

void maxDate() {
    if (date1.year < date2.year) {
        cout << "[~] Data maximala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
    } else if (date2.year < date1.year) {
        cout << "[~] Data maximala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
    } else {
        if (date1.month < date2.month) {
            cout << "[~] Data maximala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
        } else if (date2.month < date1.month) {
            cout << "[~] Data maximala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
        } else {
            if (date1.day < date2.day) {
                cout << "[~] Data maximala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
            } else if (date2.day < date1.day) {
                cout << "[~] Data maximala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
            } else {
                cout << "[~] Timpurile sunt egale: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
            }
        }
    }
}

void minDate() {
    if (date1.year > date2.year) {
        cout << "[~] Data minimala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
    } else if (date2.year > date1.year) {
        cout << "[~] Data minimala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
    } else {
        if (date1.month > date2.month) {
            cout << "[~] Data minimala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
        } else if (date2.month > date1.month) {
            cout << "[~] Data minimala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
        } else {
            if (date1.day > date2.day) {
                cout << "[~] Data minimala: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
            } else if (date2.day > date1.day) {
                cout << "[~] Data minimala: " << date2.year << "/" << date2.month << "/" << date2.day << "\n";
            } else {
                cout << "[~] Timpurile sunt egale: " << date1.year << "/" << date1.month << "/" << date1.day << "\n";
            }
        }
    }
}

int main() {

    setDate(date1);
    setDate(date2);
    getDate();
    sumDate();
    difDate();
    maxDate();
    minDate();

    
    return 0;

}
