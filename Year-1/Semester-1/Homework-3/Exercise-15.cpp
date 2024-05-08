#include <iostream>

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;

    if (x % 2 != 0 && y % 2 != 0) {
        cout << "[~] Nu este numar par" << endl;
    } else {
        cout << "[~] Cel mai mare numar par: " << ((x % 2 == 0 && x > y) ? x : y) << endl;
    }


    return 0;

}