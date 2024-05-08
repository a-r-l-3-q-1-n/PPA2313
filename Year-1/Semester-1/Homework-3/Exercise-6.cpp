#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce greutatea: "; cin >> x;
    cout << "[+] Introduce greutatea: "; cin >> y;

    if (x + y <= 100) {
        cout << "[~] Pot intra ambii copii";
    } else {
        cout << "[~] Intra pe rand";
    }


    return 0;

}