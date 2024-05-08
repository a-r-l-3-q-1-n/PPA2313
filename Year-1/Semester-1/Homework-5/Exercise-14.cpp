#include "iostream"

using namespace std;

int main() {

    int x, y;

    cout << "[+] Introduce numarul: "; cin >> x;
    cout << "[+] Introduce numarul: "; cin >> y;

    if (x > 0 || y > 0) {

        for (int iter = 1; iter <= y; iter++) {
            for(int i = 0; i < x; i++) {
                cout << iter;
            }
            cout << endl;
        }

        cout << endl << endl;

        for (int iter = 0; iter < y; iter++) {
            for(int i = 1; i <= x; i++) {
                cout << i;
            }
            cout << endl;
        }

    } else {
        cout << "[~] Numar negativ" << endl;
    }


    return 0;

}