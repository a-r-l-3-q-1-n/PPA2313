#include "iostream"

using namespace std;

int main() {

    int number;
    int sum = 0;

    while (true) {
        cout << "[+] Introduce numarul: "; cin >> number;
        if (number % 2 == 0) {
            sum += number;
        }

        if (number == 0) {
            break;
        }
    }

    cout << "[~] Suma: " << sum;


    return 0;

}