#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce x: "; cin >> x;
    cout << "[+] Introduce y: "; cin >> y;

    if (x == y - 1 || x == y + 1) {
        cout << "[~] Da";
    } else {
        cout << "[~] Nu";
    }


    return 0;

}