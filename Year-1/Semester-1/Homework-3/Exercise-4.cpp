#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce nota: "; cin >> x;
    cout << "[+] Introduce nota: "; cin >> y;
    cout << "[+] Introduce nota: "; cin >> z;

    cout << "[~] Notele sunt: ";

    if (x > 5) {
        cout << x << " ";
    }
    if (y > 5) {
        cout << y << " ";
    }
    if (z > 5) {
        cout << z << " ";
    }


    return 0;

}