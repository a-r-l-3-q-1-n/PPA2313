#include "iostream"

using namespace std;

int main() {

    int cost, distance, consumption;
    int fuelConsumed, costOfFuel;

    cout << "[+] Distanta: "; cin >> distance;
    cout << "[+] Consumul de motorina: "; cin >> consumption;
    cout << "[+] Costul de 1l pe 100km: "; cin >> cost;

    cout << endl;

    fuelConsumed = ((distance * consumption) / 100);
    cout << "[~] Consum: " << fuelConsumed << endl;

    costOfFuel = (fuelConsumed * cost);
    cout << "[~] Costul deplasarii: " << costOfFuel << endl;


    return 0;

}