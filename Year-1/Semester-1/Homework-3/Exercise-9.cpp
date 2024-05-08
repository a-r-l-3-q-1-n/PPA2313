#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;

    if (x % 2 == 0) {
        cout << "[~] " << x << " este par" << endl;
    } else {
        cout << "[~] " << x << " este impar" << endl;
    }

    if (y % 2 == 0) {
        cout << "[~] " << y << " este par" << endl;
    } else {
        cout << "[~] " << y << " este impar" << endl;
    }

    if (z % 2 == 0) {
        cout << "[~] " << z << " este par" << endl;
    } else {
        cout << "[~] " << z << " este impar" << endl;
    }


    return 0;

}