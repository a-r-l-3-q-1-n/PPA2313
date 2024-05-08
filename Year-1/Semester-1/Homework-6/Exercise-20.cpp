#include "iostream"

using namespace std;

int main() {

    int distance, perDay, back, days;

    cout << "[+] Distanta totala: "; cin >> distance;
    cout << "[+] Distanta pe zi: "; cin >> perDay;
    cout << "[+] Intoarcerea: "; cin >> back;

    days = distance / (perDay - back);

    cout << "Fat-Frumos are de mers " << days << " days";


    return 0;

}