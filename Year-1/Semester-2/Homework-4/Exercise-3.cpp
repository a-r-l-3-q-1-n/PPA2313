#include "iostream"

using namespace std;

struct Date {
    int sec, min, hour;
};

int main() {

    int sec, min, hour;
    int secSum, minSum, hourSum;
    int secDif, minDif, hourDif;

    Date dates[2];

    for (int iter = 0; iter < 2; iter++) {
        cout << "[+] Introduce timpul (s/m/h): ";
        cin >> sec >> min >> hour;

        if (!(0 <= sec && sec <= 59 && 0 <= min && min <= 59)) {
            cout << "[!] Nu respecta conditia" << endl;
            return 0;
        } else {
            dates[iter] = {.sec = sec, .min = min, .hour = hour};
        }
    }

    secSum = dates[0].sec + dates[1].sec;
    minSum = dates[0].min + dates[1].min;
    hourSum = dates[0].hour + dates[1].hour;

    secDif = dates[0].sec - dates[1].sec;
    minDif = dates[0].min - dates[1].min;
    hourDif = dates[0].hour - dates[1].hour;

    while (secSum > 59) {
        secSum -= 60;
        minSum++;
    }

    while (minSum > 59) {
        minSum -= 60;
        hourSum++;
    }

    cout << endl;
    cout << "[~] Suma dintre timpul propus: (" << secSum << "/" << minSum << "/" << hourSum << ")" << endl;
    cout << "[~] Diferenta dintre timpul propus: (" << abs(secDif) << "/" << abs(minDif) << "/" << abs(hourDif) << ")" << endl;


    return 0;

}