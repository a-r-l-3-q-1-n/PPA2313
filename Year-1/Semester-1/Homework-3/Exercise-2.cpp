#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << endl << "[~] Initial: x: " << x << ", y: " << y << endl;

    if (x > y) {
        cout << "[~] Modificat: x: " << x * 2 << ", y: " << y * 3 << endl;
    } else {
        cout << "[~] Modificat: x: " << x * 3 << ", y: " << y * 2 << endl;
    }


    return 0;

}