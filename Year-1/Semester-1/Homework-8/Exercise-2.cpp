#include "iostream"

using namespace std;

int main() {

    int n, number;
    int listOfNumbers[]{};

    cout << "[+] Introduce numarul elemente: "; cin >> n;
    for (int iter = 0; iter < n; iter++) {
        cout << "[" << iter + 1 << "] Populeaza lista: "; cin >> number;
        listOfNumbers[iter] = number;

    }

    cout << endl;
    cout << "[~] Elementele din lista: ";
    for (int iter = 0; iter < n; iter++) {
        cout<<listOfNumbers[iter]<<" ";
    }

    for (int iter = 0; iter < n; iter++) {
        listOfNumbers[iter] += 10;
    }

    cout << endl;
    cout << "[~] Elementele modificate: ";
    for (int iter = 0; iter < n; iter++) {
        cout<<listOfNumbers[iter]<<" ";
    }


    return 0;

}