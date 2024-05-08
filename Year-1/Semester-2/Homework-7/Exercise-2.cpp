#include "iostream"
#include "cmath"

using namespace std;

struct Time {
    int hour, minute, second;
} time1, time2;

void setTime(Time &time) {

    int hour, minute, second;

    cout << "[+] Introduce timpul (h/m/s): "; cin >> hour >> minute >> second;

    while (second >= 30) {
        second -= 30;
        minute++;
    }

    while (minute > 12) {
        minute -= 12;
        hour++;
    }

    time.hour = hour;
    time.minute = minute;
    time.second = second;
}

void getTime() {
    cout << "[~] Timpul 1 (h/m/s): " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
    cout << "[~] Timpul 2 (h/m/s): " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
}

void sumTime() {
    int hour = time1.hour + time2.hour;
    int minute = time1.minute + time2.minute;
    int second = time1.second + time2.second;

    while (second >= 60) {
        second -= 60;
        minute++;
    }

    while (minute >= 60) {
        minute -= 60;
        hour++;
    }

    cout << "[~] Suma (h/m/s): " << hour << "/" << minute << "/" << second << "\n";
}

void difTime() {
    int hour = time1.hour - time2.hour;
    int minute = time1.minute - time2.minute;
    int second = time1.second - time2.second;

    cout << "[~] Diferenta (h/m/s): " << abs(hour) << "/" << abs(minute) << "/" << abs(second) << "\n";
}

void maxTime() {
    if (time1.hour > time2.hour) {
        cout << "[~] Timpul maximal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
    } else if (time2.hour > time1.hour) {
        cout << "[~] Timpul maximal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
    } else {
        if (time1.minute > time2.minute) {
            cout << "[~] Timpul maximal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
        } else if (time2.minute > time1.minute) {
            cout << "[~] Timpul maximal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
        } else {
            if (time1.second > time2.second) {
                cout << "[~] Timpul maximal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
            } else if (time2.second > time1.second) {
                cout << "[~] Timpul maximal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
            } else {
                cout << "[~] Timpurile sunt egale: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
            }
        }
    }
}

void minTime() {
    if (time1.hour < time2.hour) {
        cout << "[~] Timpul minimal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
    } else if (time2.hour < time1.hour) {
        cout << "[~] Timpul minimal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
    } else {
        if (time1.minute < time2.minute) {
            cout << "[~] Timpul minimal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
        } else if (time2.minute < time1.minute) {
            cout << "[~] Timpul minimal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
        } else {
            if (time1.second < time2.second) {
                cout << "[~] Timpul minimal: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
            } else if (time2.second < time1.second) {
                cout << "[~] Timpul minimal: " << time2.hour << "/" << time2.minute << "/" << time2.second << "\n";
            } else {
                cout << "[~] Timpurile sunt egale: " << time1.hour << "/" << time1.minute << "/" << time1.second << "\n";
            }
        }
    }
}

int main() {

    setTime(time1);
    setTime(time2);
    getTime();
    sumTime();
    difTime();
    maxTime();
    minTime();

    
    return 0;

}
