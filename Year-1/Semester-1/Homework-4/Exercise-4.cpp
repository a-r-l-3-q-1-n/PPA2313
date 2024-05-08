#include "iostream"

using namespace std;

int main() {

    int x, y;
    char op;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Operatia (+, -, *, /): "; cin >> op;
    cout << "[+] Introduce numarul: "; cin >> y;


    switch (op) {
        case '+':
            cout << "[~] Rezultatul = " << x + y;
            break;
        case '-':
            cout << "[~] Rezultatul = " << x - y;
            break;
        case '*':
            cout << "[~] Rezultatul = " << x * y;
            break;
        case '/':
            if (y != 0) {
                cout << "[~] Rezultatul = " << x / y;
            } else {
                cout << "[~] --- " << endl;
            }
            break;
        default:
            cout << "[!] Nu este operator" << endl;
    }


    return 0;

}
