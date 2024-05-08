#include "iostream"

using namespace std;

int main() {

    int n;

    cout << "[+] Introduce numarul elemente: "; cin >> n;

    int *pListOfNumbers = new int [n];

    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> pListOfNumbers[iter];
    }

    cout << endl << "[~] Elementele din lista: ";
    for (int iter = 0; iter < n; iter++) {
        cout<<pListOfNumbers[iter]<<" ";
    }

    for (int iter = 0; iter < n; iter++) {
        pListOfNumbers[iter] += 10;
    }

    cout << endl << "[~] Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout<<pListOfNumbers[iter]<<" ";
    }

    delete[] pListOfNumbers;


    return 0;

}