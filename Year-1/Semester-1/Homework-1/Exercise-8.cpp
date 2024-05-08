#include "iostream"

using namespace std;

int main() {
    int x, y, z;

    cout << "Introduce trei numere: " << endl;

    cout << "[+]: "; cin >> x;
    cout << "[+]: "; cin >> y;
    cout << "[+]: "; cin >> z;

    cout << endl;

    cout << x << z << y << endl;
    cout << x << y << z << endl;
    cout << z << y << x << endl;
    cout << z << x << y << endl;
    cout << y << x << z << endl;


    return 0;

}