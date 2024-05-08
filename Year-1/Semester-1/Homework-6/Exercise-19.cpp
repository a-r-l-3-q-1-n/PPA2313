#include "iostream"

using namespace std;

int main() {

    int number, odd = 0, even = 0;

    while (true) {
        cout << "[+] Introduce un numar: "; cin >> number;

        if (number % 2 == 0) {
            even += number;
        } else {
            odd += number;
        }

        if (number % 5 == 0) {
            break;
        }
    }

    cout << "[~] Numere pare suma: " << even << endl;
    cout << "[~] Numere impare suma: " << odd << endl;


    return 0;

}