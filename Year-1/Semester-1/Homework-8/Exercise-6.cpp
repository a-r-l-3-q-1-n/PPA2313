#include "iostream"

using namespace std;

int main() {

    int n;
    int idx = 0;
    int divisors = 1;

    cout << "[+] Introduce numarul de elemente: "; cin >> n;

    if (n <= 0 || n >= 1000) {
        cout << "[~] Nu respecta conditia";
        return 0;
    }

    int list_of_numbers[n];
    int modified_list[n];

    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> list_of_numbers[iter];
    }

    for (int num = 0; num < n; num++) {

        for (int divisor = 1; divisor < (list_of_numbers[num] / 2 + 1); divisor++) {
            if (list_of_numbers[num] % divisor == 0) {
                divisors++;
            }

            if (divisors > 3) {
                modified_list[idx] = list_of_numbers[num];
                idx++;
                break;
            }
        }

        divisors = 1;

    }

    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < idx; iter++) {
        cout << modified_list[iter] << " ";
    }


    return 0;

}