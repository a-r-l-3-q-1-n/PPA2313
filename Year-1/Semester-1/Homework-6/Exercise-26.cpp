#include "iostream"

using namespace std;


int main() {

    int n, numar, i = 0, suma = 0;

    cout << "[+] Cate numere doresti sa introduci: "; cin >> n;

    while (i < n) {
        cout << "[+] Introduce numarul: "; cin >> numar;
        
        suma += numar;
        i++;
    }

    if (suma % 3 != 0) {
        cout << "[~] Media: " << (suma / i) << endl;
    } else {
        cout << "[~] Suma numerelor divizibile cu 3: " << endl;
    }


    return 0;

}