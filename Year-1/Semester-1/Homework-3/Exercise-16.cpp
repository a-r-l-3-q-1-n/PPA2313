#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;

    int maxNum = 0;

    if (x > y && x > z) {
        maxNum = x * 100 + ((y > z) ? y * 10 + z : z * 10 + y);
    } else if (y > x && y > z) {
        maxNum = y * 100 + ((x > z) ? x * 10 + z : z * 10 + x);
    } else {
        maxNum = z * 100 + ((x > y) ? x * 10 + y : y * 10 + x);
    }

    cout << "[~] Numarul format: " << maxNum << endl;


    return 0;

}