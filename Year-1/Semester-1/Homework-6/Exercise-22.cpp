#include "iostream"

using namespace std;

int main() {

    int number, numberK, evenSum = 0, oddSum = 0, i = 0;

    cout<<"[+] Introduce numarul K: "; cin >> numberK;

    while (true) {

        cout<<"[+] Introduce numarul: "; cin >> number;

        if (number % 2 == 0) {
            evenSum += number;
        } else {
            oddSum += number;
        }

        i++;

        if (evenSum > numberK) {
            break;
        }
    }

    cout << "[~] Numere: " << i << endl;
    cout << "[~] Suma: " << oddSum << endl;


    return 0;

}