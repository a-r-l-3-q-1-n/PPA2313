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

    int listOfNumbers[]{};


    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> listOfNumbers[iter];
    }


    for (int iter = 1; iter < n; iter++) {
        if (listOfNumbers[iter] < listOfNumbers[min_i]) {
            min_i = iter;
        }
    }


    temp = listOfNumbers[0];
    listOfNumbers[0] = listOfNumbers[min_i];
    listOfNumbers[min_i] = temp;

    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout << listOfNumbers[iter] << " ";
    }


    return 0;

}