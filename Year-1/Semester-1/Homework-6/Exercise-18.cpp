#include "iostream"

using namespace std;

int main() {

    int number, odd = 0, even = 0;

    while (true) {
        cout << "[+] Introduce numarul: "; cin >> number;

        if (number % 2 == 0) {
            even += number;
        } else {
            odd += number;
        }

        if (number % 3 == 0) {
            break;
        }
    }

    cout << "[~] Par suma: " << even;
    cout << "[~] Impar suma: " << odd;


    return 0;

}