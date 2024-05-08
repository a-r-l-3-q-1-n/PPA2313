#include "iostream"

using namespace std;

int main() {

    int number, numberK, sum = 0, i = 0;

    cout<<"[+] Introduce numarul K: "; cin >> numberK;

    while (true) {

        cout<<"[+] Introduce numarul: "; cin >> number;

        if (number % 2 == 0) {
            sum += number;
        }

        i++;

        if (sum > numberK) {
            break;
        }
    }

    cout << "[~] Numere: " << i << endl;
    cout << "[~] Suma: " << sum << endl;


    return 0;

}