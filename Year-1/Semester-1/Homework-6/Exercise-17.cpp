#include "iostream"

using namespace std;

int main() {

    int number;

    cout << "[+] Introduce numarul: "; cin >> number;

    for (int x = 1; x <= number; x++) {
        for(int y = 1; y <= x; y++) {
            cout << y;
        }
        cout << endl;
    }

    cout<<endl;

    for (int x = number; x >= 1; x--) {
        for(int y = 1; y <= x; y++) {
            cout << y;
        }
        cout << endl;
    }


    return 0;

}