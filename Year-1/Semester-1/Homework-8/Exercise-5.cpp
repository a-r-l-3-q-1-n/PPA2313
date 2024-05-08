#include "iostream"

using namespace std;

int main() {

    int n;
    int min_i = 0, temp;

    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int list_of_numbers[n];


    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> list_of_numbers[iter];
    }


    for (int iter = 1; iter < n; iter++) {
        if (list_of_numbers[iter] < list_of_numbers[min_i]) {
            min_i = iter;
        }
    }


    temp = list_of_numbers[2];
    list_of_numbers[2] = list_of_numbers[min_i];
    list_of_numbers[min_i] = temp;

    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << list_of_numbers[iter] << " ";
    }


    return 0;

}