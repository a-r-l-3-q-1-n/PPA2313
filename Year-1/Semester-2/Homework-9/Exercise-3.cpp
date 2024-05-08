#include "iostream"

using namespace std;

int product(int x, int y) {
    if (x == 0) {
        return 0;
    }
    return x > 0 ? product(x - 1, y) + y : product( x + 1, y) - y;
}

int division(int x, int y) {
    if (y == 0) {
        cout << "[!] Impartirea la 0";
        return 0;
    }
    return x < y ? 0 : 1 + division(x - y, y);
}

int rest(int x, int y) {
    if (y == 0) {
        cout << "[!] Impartirea la 0";
        return 0;
    }
    return x > y ? y : rest(x, y - x);
}

int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    cout << "\n";

    cout << "[~] Produsul numerelor: " << product(x, y) << "\n";
    cout << "[~] Catul numerelor: " << division(x, y) << "\n";
    cout << "[~] Restul numerelor: " << rest(x, y) << "\n";


    return 0;

}
