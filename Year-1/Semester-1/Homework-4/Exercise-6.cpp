#include "iostream"

using namespace std;

int main() {

    int day;
    float sum, disc = 0.0;

    cout << "[+] Introduce ziua: "; cin >> day;
    cout << "[+] Introduce numarul: "; cin >> sum;

    if (sum < 0) {
        cout << "[~] --- " << endl;
        return 0;
    }

    switch (day) {
        case 1:
            if (sum >= 500) {
                disc = 0.04;
            }
            break;
        case 2:
            if (sum >= 500) {
                disc = 0.05;
            }
            break;
        case 3:
            if (sum >= 500) {
                disc = 0.06;
            }
            break;
        case 4:
            if (sum >= 500) {
                disc = 0.07;
            }
            break;
        case 5:
            if (sum >= 500) {
                disc = 0.08;
            }
            break;
        case 6:
        case 7:
            if (sum < 500) {
                disc = 0.1;
            } else {
                disc = 0.05;
            }
            break;
        default:
            cout << "[~] --- " << endl;
            return 0;
    }

    cout << endl;
    cout << "[~] Reducere: " << disc * 100 << "%" << endl;
    cout << "[~] Suma: " << sum - (sum * disc) << " lei" << endl;


    return 0;

}