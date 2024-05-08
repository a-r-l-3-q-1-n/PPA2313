#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;

    int a = x, b = y;

    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    int cmmdc = a;
    int cmmmc = (x * y) / cmmdc;

    cout << "[~] CMMDC: " << cmmdc << endl;
    cout << "[~] CMMMC: " << cmmmc << endl;


    return 0;

}