#include "iostream"

using namespace std;

int main() {
    int n;

    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int list_of_numbers[n];

    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> list_of_numbers[iter];
    }


    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] - 12 << " ";
    }


    return 0;

}