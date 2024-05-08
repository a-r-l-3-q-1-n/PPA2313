#include "iostream"

using namespace std;

int main() {

    int x;
    int *pX = &x;

    cout << "[+] Introduce numarul: "; cin >> *pX;
    cout << "[~] Divizorii lui " << *pX << " sunt: ";

    for (int iter = 1; iter <= *pX; iter++) {
        if (*pX % iter == 0) {
            cout << iter << " ";
        }
    }


    return 0;

}