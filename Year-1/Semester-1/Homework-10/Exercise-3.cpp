#include "iostream"
#include "cstring"

using namespace std;

int main() {

    char array[100];

    cout << "[+] Introduce caractere: "; gets(array);

    // a)
    cout << endl << "[~] Doar cifrele: ";
    for (int iter = 0; iter < strlen(array); iter++) {
        if (48 <= int(array[iter]) && int(array[iter]) <= 57) {
            cout << array[iter] << " ";
        }
    }

    // b)
    cout << endl << "[~] Fiecare cuvant din rand nou: " << endl;
    for (int iter = 0; iter < strlen(array); iter++) {
        if (int(array[iter]) == 32) {
            cout << "\n";
        }
        cout << array[iter];
    }

    // c)
    cout << endl << "[~] Doar consoane: ";
    for (int iter = 0; iter < strlen(array); iter++) {
        if (isalpha(array[iter]) && !strchr("AaEeIiOoUu", array[iter])) {
            cout << array[iter] << " ";
        }
    }

    // d)
    cout << endl << "[~] Doar cifrele cu exceptia n % 3: ";
    for (int iter = 0; iter < strlen(array); iter++) {
        if (isdigit(array[iter]) && array[iter] % 3 != 0) {
            cout << array[iter] << " ";
        }
    }


    return 0;

}