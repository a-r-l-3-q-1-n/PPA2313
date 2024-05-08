#include "iostream"

using namespace std;

int main() {

    int years;

    cout << "[+] Introduce anii: "; cin >> years;

    cout << "[~] " << 12 * years << " luni" << endl;
    cout << "[~] " << 365 * years << " zile" << endl;
    cout << "[~] " << 8760 * years << " ore" << endl;


    return 0;

}