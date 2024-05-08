#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;

    int sumA = 0, sumB = 0, sumC = 0;
    int prodA = 1, prodB = 1, prodC = 1;
    
    int temp = x;
    while (temp > 0) {
        sumA += temp % 10;
        prodA *= temp % 10;
        temp /= 10;
    }

    temp = y;
    while (temp > 0) {
        sumB += temp % 10;
        prodB *= temp % 10;
        temp /= 10;
    }

    temp = z;
    while (temp > 0) {
        sumC += temp % 10;
        prodC *= temp % 10;
        temp /= 10;
    }

    int sumMax = max(sumA, max(sumB, sumC));
    
    cout << "[~] Numarul cu suma cifrelor maxim: ";
    if (sumMax == sumA) {
        cout << x;
    }
    if (sumMax == sumB) {
        cout << y;
    }
    if (sumMax == sumC) {
        cout << z;
    }
    
    cout << " cu suma " << sumMax << endl;
    
    
    int prodMin = max(prodA, max(prodB, prodC));
    
    cout << "[~] Numarul cu produsul cifrelor maxim: ";
    if (prodMin == prodA) {
        cout << x;
    }
    if (prodMin == prodB) {
        cout << y;
    }
    if (prodMin == prodC) {
        cout << z;
    }

    cout << " cu produsul " << prodMin << endl;


    int mulCommAB = (x * y), mulCommABC = 1;

    while (mulCommAB != 0) {
        mulCommABC = x % y;
        x = y;
        y = mulCommABC;
    }
    mulCommABC = (mulCommAB / x) * z;

    cout << "[~] Multiplul comun: " << mulCommABC << endl;


    return 0;

}