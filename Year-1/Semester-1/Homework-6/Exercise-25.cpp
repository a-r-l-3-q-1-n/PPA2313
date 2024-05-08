#include "iostream"

using namespace std;


int main() {

    int n, number, i = 0, sum = 0;

    cout << "[+] Cate numere doresti sa adaugi: "; cin >> n;

    while (i < n) {
        cout << "[+] Introduce numarul:"; cin >> number;

        sum += number;
        i++;
    }

    if (sum % 2 != 0) {
        cout << "[~] Media: " << (sum / i) << endl;
    } else {
        cout << "[~] Suma numerelor pare: " << endl;
    }


    return 0;

}