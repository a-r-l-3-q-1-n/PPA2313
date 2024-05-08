#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce X: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << "[~] Valori initiale: " << x << ", " << y << endl;

    swap(x, y);

    cout << "[~] Valori modificate: " << x << ", " << y << endl;


    return 0;

}