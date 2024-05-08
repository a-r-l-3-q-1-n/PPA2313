#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;


    while (x != y || y != z) {
        if (x > y) {
            if (x > z) {
                x -= y;
                x -= z;
            } else {
                z -= x;
            }
        } else {
            if (y > z) {
                y -= x;
                y -= z;
            } else {
                z -= y;
            }
        }
    }

    cout << "[~] CMMDC este: " << x << endl;


    return 0;

}