#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce punctajul: "; cin >> x;
    cout << "[+] Introduce punctajul: "; cin >> y;

    if (x > y) {
        cout << x << " puncte, " << y << " puncte";
    } else {
        cout << y << " puncte, " << x << " puncte";
    }


    return 0;

}