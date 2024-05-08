#include "iostream"
#include "iomanip"

using namespace std;

int main() {

    char character;

    cout << "[+] Introduce un caracter: "; cin >> character;

    cout << endl;
    cout << setw(1) << character << endl;
    cout << setw(1) << character << setw(1) << character << endl;
    cout << setw(1) << character << setw(1) << character << setw(1) << character << endl;
    cout << setw(1) << character << setw(1) << character << setw(1) << character << setw(1) << setw(1)  << character << endl;

    cout << endl;
    cout << setw(1) << character << setw(2) << character << setw(2) << character << setw(2) << character << endl;
    cout << setw(2) << character << setw(2) << character << setw(2) << character << endl;
    cout << setw(3) << character << setw(2) << character << endl;
    cout << setw(4) << character << endl;

    cout << endl;
    cout << setw(1) << character << setw(1) << character << setw(1) << character << setw(1) << character << endl;
    cout << setw(2) << character << setw(1) << character << setw(1) << character << endl;
    cout << setw(3) << character << setw(1) << character << endl;
    cout << setw(4) << character << endl;

    cout << endl;
    cout << setw(4) << character << endl;
    cout << setw(3) << character << setw(2) << character << endl;
    cout << setw(2) << character << setw(2) << character << setw(2) << character << endl;
    cout << setw(1) << character << setw(2) << character << setw(2) << character << setw(2) << character << endl;


    return 0;

}