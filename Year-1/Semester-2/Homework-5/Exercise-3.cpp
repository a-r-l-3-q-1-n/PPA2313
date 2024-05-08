#include "iostream"

using namespace std;

int main() {

    int x, y;
    int *pX = &x, *pY = &y;

    cout << "[+] Introduce x: "; cin >> *pX;
    cout << "[+] Introduce y: "; cin >> *pY;

    if (*pX == *pY - 1 || *pX == *pY + 1) {
        cout << "[~] Da";
    } else {
        cout << "[~] Nu";
    }


    return 0;

}