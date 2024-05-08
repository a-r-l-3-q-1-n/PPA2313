#include "iostream"

using namespace std;

int main() {

    char letter;

    cout << "[+] Introduce o litera: "; cin >> letter;

    switch (letter) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "[~] Este vocala" << endl;
            break;
        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            cout << "[~] Este consoana" << endl;
            break;
        default:
            cout << "[!] Nu este litera" << endl;
    }


    return 0;

}