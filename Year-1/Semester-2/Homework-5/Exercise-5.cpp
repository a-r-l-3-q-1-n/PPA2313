#include "iostream"

using namespace std;

int main() {

    int x, y;
    char op;

    int *pX = &x, *pY = &y;
    char *pOp = &op;

    cout << "[+] Introduce numarul: "; cin >> *pX;
    cout << "[+] Operatia (+, -, *, /, %): "; cin >> *pOp;
    cout << "[+] Introduce numarul: "; cin >> *pY;


    switch (*pOp) {
        case '+':
            cout << "[~] Rezultatul = " << *pX + *pY;
            break;
        case '-':
            cout << "[~] Rezultatul = " << *pX - *pY;
            break;
        case '*':
            cout << "[~] Rezultatul = " << *pX * *pY;
            break;
        case '/':
            if (y != 0) {
                cout << "[~] Rezultatul = " << *pX / *pY;
            } else {
                cout << "[~] --- " << endl;
            }
            break;
        case '%':
            if (y != 0) {
                cout << "[~] Rezultatul = " << *pX % *pY;
            } else {
                cout << "[~] --- " << endl;
            }
            break;
        default:
            cout << "[!] Nu este operator" << endl;
    }


    return 0;

}