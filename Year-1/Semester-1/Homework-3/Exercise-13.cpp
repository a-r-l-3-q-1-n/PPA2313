#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce nota: "; cin >> x;
    cout << "[+] Introduce nota: "; cin >> y;
    cout << "[+] Introduce nota: "; cin >> z;

    cout << "[~] Notele sunt: ";

    if (z >= 8) {
        cout << x << " " << y << " " << z << endl;
    } else {
        cout << max(x, y) << endl;
    }


    return 0;

}