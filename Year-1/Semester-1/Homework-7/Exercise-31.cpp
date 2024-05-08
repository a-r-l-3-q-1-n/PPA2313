#include "iostream"

using namespace std;

int main() {

    int x, y, z;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;
    cout << "[+] Introduce numarul: "; cin >> z;

    cout << "[~] Divizorii comuni: ";

    int minNumber = min(min(x, y), z);

    for (int iter = 1; iter <= minNumber; ++iter) {

        if (x % iter == 0 && y % iter == 0 && z % iter == 0) {
            cout << iter << " ";
        }
    }


    return 0;

}