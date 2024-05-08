#include <iostream>

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;


    if (x % 2 == 0 && y % 2 == 0 && z % 2 == 0) {
        cout << "[~] Numarul mai mare dintre al 2 si al 3 numar este: " << max(y, z) << endl;
    } else {
        cout << "[~] Suma dintre primele 2 numere : " << x + y << endl;
    }


    return 0;

}