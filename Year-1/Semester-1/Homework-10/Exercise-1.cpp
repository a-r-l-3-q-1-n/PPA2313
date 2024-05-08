#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char array[100];

    int uppercaseCount = 0;
    int ciphersCount = 0;
    int specCharsCount = 0;
    int evenNumbersCount = 0;

    cout << "[+] Introduce caractere: "; gets(array);
    cout << endl;

    for (int iter = 0; iter < strlen(array); iter++) {

        // a)
        if (65 <= int(array[iter]) && int(array[iter]) <= 90) {
            uppercaseCount++;
        }

        // b)
        if (48 <= int(array[iter]) && int(array[iter]) <= 57) {
            ciphersCount++;
        }

        // c)
        if (40 <= int(array[iter]) && int(array[iter]) <= 47 || int(array[iter]) == 61 ) {
            specCharsCount++;
        }

        // d)
        if (48 == int(array[iter]) || int(array[iter]) == 50 || int(array[iter]) == 52 ||
            int(array[iter]) == 54 || int(array[iter]) == 56
            ) {
            evenNumbersCount++;
        }
    }

    cout << "[~] Numarul de majuscule: " << uppercaseCount << endl;
    cout << "[~] Numarul de cifre: " << ciphersCount << endl;
    cout << "[~] Numarul de caractere speciale: " << specCharsCount << endl;
    cout << "[~] Numarul de numere pare: " << evenNumbersCount << endl;


    return 0;

}