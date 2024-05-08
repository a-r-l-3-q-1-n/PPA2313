#include "iostream"

using namespace std;

int main() {

    int digit;

    cout << "[+] Introduce o cifra (0-9): "; cin >> digit;

    switch (digit) {
        case 0:
            cout << "[~] Zero" << endl;
            break;
        case 1:
            cout << "[~] Unu" << endl;
            break;
        case 2:
            cout << "[~] Doi" << endl;
            break;
        case 3:
            cout << "[~] Trei" << endl;
            break;
        case 4:
            cout << "[~] Patru" << endl;
            break;
        case 5:
            cout << "[~] Cinci" << endl;
            break;
        case 6:
            cout << "[~] Sase" << endl;
            break;
        case 7:
            cout << "[~] Sapte" << endl;
            break;
        case 8:
            cout << "[~] Opt" << endl;
            break;
        case 9:
            cout << "[~] Noua" << endl;
            break;
        default:
            cout << "[!] Nu este cifra" << endl;
    }


    return 0;

}