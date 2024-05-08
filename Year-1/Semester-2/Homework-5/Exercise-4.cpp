#include "iostream"

using namespace std;

int main() {

    int x, y;
    int *pX = &x, *pY = &y;

    cout << "[+] Introduce greutatea: "; cin >> *pX;
    cout << "[+] Introduce greutatea: "; cin >> *pX;

    if (*pX + *pY < 100) {
        cout << "[~] Pot intra ambii copii";
    } else {
        cout << "[~] Intra pe rand";
    }


    return 0;

}