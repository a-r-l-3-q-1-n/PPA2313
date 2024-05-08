#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "Introduce trei numere: " << endl;

    cout << "[+]: "; cin >> x;
    cout << "[+]: "; cin >> y;
    cout << "[+]: "; cin >> z;

    cout << endl;

    cout << x << " + " << y << " = " << x+y <<endl;
    cout << x << " + " << z << " = " << x+z <<endl;
    cout << y << " + " << z << " = " << y+z <<endl;


    return 0;

}