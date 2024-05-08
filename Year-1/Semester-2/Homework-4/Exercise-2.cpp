#include "iostream"

using namespace std;

struct Date {
    int day, month, year;
};

int main() {

    int day, month, year;
    int daySum, monthSum, yearSum;
    int dayDif, monthDif, yearDif;

    Date dates[2];

    for (int iter = 0; iter < 2; iter++) {
        cout << "[+] Introduce data (d/m/y): ";
        cin >> day >> month >> year;

        if (!(0 <= day && day <= 30 && 0 <= month && month <= 12)) {
            cout << "[!] Nu respecta conditia" << endl;
            return 0;
        } else {
            dates[iter] = {.day = day, .month = month, .year = year};
        }
    }

    daySum = dates[0].day + dates[1].day;
    monthSum = dates[0].month + dates[1].month;
    yearSum = dates[0].year + dates[1].year;

    dayDif = dates[0].day - dates[1].day;
    monthDif = dates[0].month - dates[1].month;
    yearDif = dates[0].year - dates[1].year;

    while (daySum > 30) {
        daySum -= 30;
        monthSum++;
    }

    while (monthSum > 12) {
        monthSum -= 12;
        yearSum++;
    }

    cout << endl;
    cout << "[~] Suma dintre datele propuse: (" << daySum << "/" << monthSum << "/" << yearSum << ")" << endl;
    cout << "[~] Diferenta dintre datele propuse: (" << abs(dayDif) << "/" << abs(monthDif) << "/" << abs(yearDif) << ")" << endl;


    return 0;

}