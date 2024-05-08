#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce X: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << "[~] Valori initiale: " << x << ", " << y << endl;

    z = x;
    x = y;
    y = z;

    cout << "[~] Valori modificate: " << x << ", " << y << endl;


    return 0;

}