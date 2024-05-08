#include <iostream>

using namespace std;

int main() {

    int x, y, z;
    int min = 9, med, max;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;


    if (x != 0 && x < min) {
        min = x;
    }

    if (y != 0 && y < min) {
        min = y;
    }

    if (z != 0 && z < min) {
        min = z;
    }


    if (x != min) {
        med = x;
        max = (y > z) ? y : z;
    } else if (y != min) {
        med = y;
        max = (x > z) ? x : z;
    } else {
        med = z;
        max = (x > y) ? x : y;
    }

    cout << "Numarul format este: " << min << med << max << endl;


    return 0;

}