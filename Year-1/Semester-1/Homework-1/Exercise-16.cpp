#include "iostream"

using namespace std;

int main() {

    int distance, days, weeks, speed;

    cout << "[+] Distanta: "; cin >> distance;
    cout << "[+] Zile: "; cin >> days;
    cout << "[+] Saptamani: "; cin >> weeks;

    speed = (distance / ((days * 12) + (weeks * 168)));

    cout << "[~] Nava va parcurge " << distance << "km, cu viteza " << speed << "km/h";


    return 0;

}