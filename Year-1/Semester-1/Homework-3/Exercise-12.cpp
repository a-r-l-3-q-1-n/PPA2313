#include "iostream"

using namespace std;

int main() {

    int x, y, z;
    int min, med, max;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;

    // a)

    max = x, min = x;

    if (y > max) {
        max = y;
    } else if (y < min) {
        min = y;
    }

    if (z > max) {
        max = z;
    } else if (z < min) {
        min = z;
    }

    cout << endl;
    cout << "[~] Max: " << max << endl;
    cout << "[~] Min: " << min << endl;

    cout << "[~] Consecutiv: ";
    if (x >= y && x >= z) {
        max = x;
        if (y >= z) {
            med = y;
            min = z;
        } else {
            med = z;
            min = y;
        }
    } else if (y >= x && y >= z) {
        max = y;
        if (x >= z) {
            med = x;
            min = z;
        } else {
            med = z;
            min = x;
        }
    } else {
        max = z;
        if (x >= y) {
            med = x;
            min = y;
        } else {
            med = y;
            min = x;
        }
    }

    cout << min << " " << med << " " << max << endl;

    // b)

    med = x + y + z - max - min;

    cout << endl;
    cout << "[~] Numarul din mijloc: " << med << endl;

    // c)

    cout << endl;
    if (x + 1 == y && x + 2 == z) {
        cout << "[~] Formeaza o secventa";
    } else {
        cout << "[~] Nu formeaza o secventa";
    }


    return 0;

}